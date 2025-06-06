; Comments
(line_comment) @comment

; Numeric literals
(number_literal) @number

; String literals
(str_literal) @string
(long_str_literal) @string
(buffer_literal) @string
(long_buffer_literal) @string

; Boolean and nil constants
(bool_literal) @constant.builtin
(nil_literal) @constant.builtin

; Keywords (prefixed with colon)
(keyword) @constant

; Special forms and built-in functions as symbols
(symbol) @keyword
(#match? @keyword "^(def|var|varglobal|fn|defn|defmacro|defglobal|do|quote|quasiquote|unquote|splice|if|if-let|when|unless|cond|case|while|for|loop|each|break|continue|return|yield|resume|set|upscope|try|catch|finally|throw|with|with-syms|gensym|import|use|require|module|fiber|thread|ev/spawn|ev/do-thread)$")

; Function calls - first element in tuple
(tuple
  . (symbol) @function)

; Macro calls - first element in tuple starting with uppercase
(tuple
  . (symbol) @function.macro
  (#match? @function.macro "^[A-Z]"))

; Built-in arithmetic and comparison operators
(symbol) @function.builtin
(#match? @function.builtin "^(\\+|\\-|\\*|\\/|%|=|<|>|<=|>=|not=|and|or|not)$")

; Built-in functions
(symbol) @function.builtin
(#match? @function.builtin "^(length|get|put|merge|keys|values|pairs|map|filter|reduce|apply|partial|comp|juxt|first|last|rest|butlast|drop|take|drop-while|take-while|reverse|sort|sort-by|group-by|frequencies|distinct|flatten|partition|partition-by|split-at|split-with|concat|mapcat|interleave|interpose|zip|unzip)$")

; Thread macros
(symbol) @function.macro
(#match? @function.macro "^(->|->\\?|->>|->>\\?|as->|some->|some->>|cond->|cond->>)$")

; Default symbols are variables
(symbol) @variable

; Punctuation
[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
  "@{"
] @punctuation.bracket

; Special prefixes
"@" @punctuation.special
"'" @punctuation.special
"~" @punctuation.special
"," @punctuation.special
";~" @punctuation.special
"~@" @punctuation.special