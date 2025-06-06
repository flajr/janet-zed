#!/bin/bash
set -e

# Build script for Janet Zed extension

echo "Building Janet grammar..."

# Change to the grammar directory
cd languages/janet

# Generate the parser
echo "Generating parser..."
tree-sitter generate

# Create a temporary directory for the build
BUILD_DIR=$(mktemp -d)
echo "Using temporary build directory: $BUILD_DIR"

# Copy necessary files to temp directory
cp -r src grammar.js package.json "$BUILD_DIR/" 2>/dev/null || true

# Set up environment for podman
export DOCKER_HOST="${DOCKER_HOST:-unix:///run/user/$(id -u)/podman/podman.sock}"

# Build WASM using podman with proper permissions
echo "Building WASM..."
podman run --rm \
  -v "$BUILD_DIR:/src:Z" \
  -w /src \
  --userns=keep-id \
  emscripten/emsdk:3.1.29 \
  emcc \
    -fno-exceptions \
    -fno-rtti \
    -Os \
    -o janet.wasm \
    -s WASM=1 \
    -s SIDE_MODULE=2 \
    -s TOTAL_MEMORY=33554432 \
    -s NODEJS_CATCH_EXIT=0 \
    -s NODEJS_CATCH_REJECTION=0 \
    -s EXPORTED_FUNCTIONS='["_tree_sitter_janet"]' \
    -I src \
    src/parser.c

# Copy the WASM file back
if [ -f "$BUILD_DIR/janet.wasm" ]; then
  cp "$BUILD_DIR/janet.wasm" .

  # Also copy to grammars directory for Zed
  mkdir -p ../../grammars
  cp "$BUILD_DIR/janet.wasm" ../../grammars/

  echo "WASM build successful!"
else
  echo "Error: WASM file not found"
  exit 1
fi

# Clean up
rm -rf "$BUILD_DIR"

echo "Build complete!"
