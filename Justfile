# Janet Zed Extension Justfile

# Default recipe to display help
default:
  @just --list

# Install dependencies
install:
  npm install

# Build the tree-sitter grammar to WASM
build: install
  ./build.sh
  @echo "Grammar built successfully"

# Clean build artifacts
clean:
  rm -rf node_modules
  rm -rf languages/janet/src
  rm -f languages/janet/*.wasm
  rm -f package-lock.json
  # Clean up non-essential files from languages/janet directory
  rm -f languages/janet/.editorconfig
  rm -f languages/janet/.gitattributes
  rm -f languages/janet/.gitignore
  rm -f languages/janet/Cargo.toml
  rm -f languages/janet/Makefile
  rm -f languages/janet/Package.swift
  rm -f languages/janet/binding.gyp
  rm -f languages/janet/go.mod
  rm -f languages/janet/grammar.js
  rm -f languages/janet/package.json
  rm -f languages/janet/pyproject.toml
  rm -f languages/janet/setup.py
  rm -rf languages/janet/bindings

# Test the grammar
test: build
  cd languages/janet && tree-sitter test

# Package the extension
package: build
  @echo "Packaging extension..."
  @if [ ! -f "languages/janet/tree-sitter-janet.wasm" ]; then \
    echo "Error: WASM file not found. Run 'just build' first."; \
    exit 1; \
  fi
  @echo "Extension ready for distribution"
  @echo "Files included:"
  @find . -name "*.wasm" -o -name "*.toml" -o -name "*.scm" | grep -v node_modules | sort

# Development setup
dev: clean install build
  @echo "Development environment ready"

# Check if all required files are present
check:
  @echo "Checking extension structure..."
  @test -f extension.toml || (echo "Missing extension.toml" && exit 1)
  @test -f languages/janet/config.toml || (echo "Missing config.toml" && exit 1)
  @test -f languages/janet/highlights.scm || (echo "Missing highlights.scm" && exit 1)
  @test -f languages/janet/brackets.scm || (echo "Missing brackets.scm" && exit 1)
  @test -f languages/janet/indents.scm || (echo "Missing indents.scm" && exit 1)
  @test -f languages/janet/grammar.js || (echo "Missing grammar.js" && exit 1)
  @echo "All required files present ✓"

# Watch for changes during development
watch:
  @echo "Watching for changes..."
  @while true; do \
    inotifywait -e modify languages/janet/*.scm 2>/dev/null || sleep 2; \
    echo "Changes detected, rebuilding..."; \
    just build; \
  done