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
  rm -f package-lock.json
  # Clean up languages/janet directory (keep essential config files)
  rm -rf languages/janet/src
  rm -f languages/janet/*.wasm
  rm -f languages/janet/.editorconfig
  rm -f languages/janet/.gitattributes
  rm -f languages/janet/.gitignore
  rm -f languages/janet/Cargo.toml
  rm -f languages/janet/Makefile
  rm -f languages/janet/Package.swift
  rm -f languages/janet/binding.gyp
  rm -f languages/janet/go.mod
  rm -f languages/janet/package.json
  rm -f languages/janet/pyproject.toml
  rm -f languages/janet/setup.py
  rm -rf languages/janet/bindings
  # Clean up grammars/janet directory (where tree-sitter builds)
  rm -rf grammars/janet/src
  rm -f grammars/janet/*.wasm
  rm -f grammars/janet/.editorconfig
  rm -f grammars/janet/.gitattributes
  rm -f grammars/janet/.gitignore
  rm -f grammars/janet/Cargo.toml
  rm -f grammars/janet/Makefile
  rm -f grammars/janet/Package.swift
  rm -f grammars/janet/binding.gyp
  rm -f grammars/janet/go.mod
  rm -f grammars/janet/package.json
  rm -f grammars/janet/pyproject.toml
  rm -f grammars/janet/setup.py
  rm -rf grammars/janet/bindings
  rm -rf grammars/janet/target
  rm -rf grammars/janet/build

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
  @test -f grammars/janet/config.toml || (echo "Missing config.toml" && exit 1)
  @test -f grammars/janet/highlights.scm || (echo "Missing highlights.scm" && exit 1)
  @test -f grammars/janet/brackets.scm || (echo "Missing brackets.scm" && exit 1)
  @test -f grammars/janet/indents.scm || (echo "Missing indents.scm" && exit 1)
  @test -f grammars/janet/grammar.js || (echo "Missing grammar.js" && exit 1)
  @echo "All required files present ✓"

# Watch for changes during development
watch:
  @echo "Watching for changes..."
  @while true; do \
    inotifywait -e modify languages/janet/*.scm 2>/dev/null || sleep 2; \
    echo "Changes detected, rebuilding..."; \
    just build; \
  done
