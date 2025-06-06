module.exports = grammar({
  name: 'janet',

  extras: $ => [
    /\s/,
    $.line_comment,
  ],

  rules: {
    source_file: $ => repeat($._value),

    _value: $ => choice(
      $.number_literal,
      $.str_literal,
      $.long_str_literal,
      $.buffer_literal,
      $.long_buffer_literal,
      $.keyword,
      $.symbol,
      $.bool_literal,
      $.nil_literal,
      $.tuple,
      $.array,
      $.table,
      $.struct,
    ),

    // Numbers
    number_literal: $ => token(choice(
      // Hexadecimal
      /0x[0-9a-fA-F]+/,
      // Octal
      /0o[0-7]+/,
      // Binary
      /0b[01]+/,
      // Decimal with optional scientific notation
      /[+-]?[0-9]+(\.[0-9]+)?([eE][+-]?[0-9]+)?/,
      // Just decimal part
      /[+-]?\.[0-9]+([eE][+-]?[0-9]+)?/,
    )),

    // Strings
    str_literal: $ => seq(
      '"',
      repeat(choice(
        /[^"\\]+/,
        /\\./,
      )),
      '"'
    ),

    long_str_literal: $ => seq(
      '@"',
      repeat(/[^"]/),
      '"'
    ),

    // Buffers
    buffer_literal: $ => seq(
      '@`',
      repeat(choice(
        /[^`\\]+/,
        /\\./,
      )),
      '`'
    ),

    long_buffer_literal: $ => seq(
      '@```',
      repeat(/[^`]|`[^`]|``[^`]/),
      '```'
    ),

    // Keywords
    keyword: $ => /:[a-zA-Z_][a-zA-Z0-9_\-/*+?!]*/,

    // Symbols
    symbol: $ => /[a-zA-Z_+\-*/%=<>!?&|][a-zA-Z0-9_+\-*/%=<>!?&|]*/,

    // Booleans
    bool_literal: $ => choice('true', 'false'),

    // Nil
    nil_literal: $ => 'nil',

    // Comments
    line_comment: $ => /#[^\n]*/,

    // Data structures
    tuple: $ => seq(
      '(',
      repeat($._value),
      ')'
    ),

    array: $ => seq(
      '[',
      repeat($._value),
      ']'
    ),

    table: $ => seq(
      '{',
      repeat(seq($._value, $._value)),
      '}'
    ),

    struct: $ => seq(
      '@{',
      repeat(seq($._value, $._value)),
      '}'
    ),
  }
});