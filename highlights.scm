; Numeric literals
(number_literal) @number

; String literals with various forms
[
    (str_literal)
    (long_str_literal) 
    (buffer_literal)
    (long_buffer_literal)
] @string

; Boolean and nil constants
[
    (bool_literal)
    (nil_literal)
] @constant.builtin

; Comments
(line_comment) @comment

; Core language keywords and special forms
[
    "def"
    "var" 
    "varglobal"
    "fn"
    "defn"
    "defmacro"
    "defglobal"
    "do"
    "quote"
    "quasiquote"
    "unquote"
    "splice"
    "if"
    "if-let"
    "when"
    "unless"
    "cond"
    "case"
    "while"
    "for"
    "loop"
    "each"
    "break"
    "continue"
    "return"
    "yield"
    "resume"
    "set"
    "upscope"
    "try"
    "catch"
    "finally"
    "throw"
    "with"
    "with-syms"
    "gensym"
    "import"
    "use"
    "require"
    "module"
    "fiber"
    "thread"
    "ev/spawn"
    "ev/do-thread"
] @keyword

; Function calls in tuple context
(tuple
  .
  (symbol) @function)

; Macro calls
(tuple
  .
  (symbol) @function.macro
  (#match? @function.macro "^[A-Z]"))

; Keywords (prefixed with colon)
(keyword) @keyword

; Symbols and variables
(symbol) @variable

; Built-in functions
(symbol) @function.builtin
(#match? @function.builtin "^(\\+|\\-|\\*|\\/|%|=|<|>|<=|>=|not=|and|or|not|length|get|put|merge|keys|values|pairs|map|filter|reduce|apply|partial|comp|juxt|thread-first|thread-last|->|->?|->>|->>?|as->|some->|some->>|cond->|cond->>|if-let|when-let|unless-let)$")

; Special symbols
[
    "true"
    "false" 
    "nil"
] @constant.builtin

; Numbers with special formatting
(number_literal) @number
(#match? @number "^0x[0-9a-fA-F]+$") @number.hex
(#match? @number "^0o[0-7]+$") @number.octal  
(#match? @number "^0b[01]+$") @number.binary
(#match? @number "^[0-9]*\\.[0-9]+([eE][+-]?[0-9]+)?$") @number.float

; Punctuation
[
    "("
    ")"
    "["
    "]"
    "{"
    "}"
] @punctuation.bracket

[
    ","
    ";"
] @punctuation.delimiter

; Operators in infix position
(symbol) @operator
(#match? @operator "^[+\\-*/%=<>!&|^~]+$")

; Documentation strings
(str_literal) @comment.documentation
(#match? @comment.documentation "^\".*\\n.*\"$")
