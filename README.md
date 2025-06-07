# Janet Language Support for Zed

A minimal extension providing Janet language support for the Zed editor.

## Features

- Syntax highlighting
- Auto-indentation
- Bracket matching
- Comment toggling
- Language server support (janet-lsp)

## Installation

This extension will be available through Zed's extension marketplace once published.

### Manual Installation (Development)

1. Clone this repository
2. Build the extension:
   ```bash
   just build
   # or
   npm install && npm run build
   ```

## Language Server

This extension supports `janet-lsp`. To use it, ensure janet-lsp is installed and available in your PATH.

## Development

### Prerequisites

- Node.js (v16+)
- npm or compatible package manager
- just (optional, for using Justfile)

### Building

```bash
# Using just
just build

# Using npm directly
npm install
npm run build
```

The build process generates the tree-sitter WASM module from the included grammar.js file.

### Project Structure

```
janet-zed/
├── extension.toml         # Extension metadata
├── package.json           # Node dependencies
├── Justfile               # Build automation
├── build.sh               # Build script, well, just because
└── languages/
    └── janet/
        ├── config.toml    # Language configuration
        ├── highlights.scm # Syntax highlighting queries
        ├── brackets.scm   # Bracket matching queries
        └── indents.scm    # Auto-indentation queries
```

## License

MIT - See LICENSE file for details

## Contributing

Contributions are welcome! Please feel free to submit issues or pull requests.

## Acknowledgments

- Janet programming language: [janet-lang.org](https://janet-lang.org)
- Tree-sitter grammar: Custom implementation included in this extension
