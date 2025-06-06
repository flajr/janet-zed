; Comments
(line_comment) @comment

; Literals
(number_literal) @number
(str_literal) @string
(long_str_literal) @string
(buffer_literal) @string
(long_buffer_literal) @string
(bool_literal) @constant.builtin
(nil_literal) @constant.builtin

; Keywords and symbols
(keyword) @constant
(symbol) @variable

; Special forms
(quote_form) @punctuation.special
(quasiquote_form) @punctuation.special
(unquote_form) @punctuation.special
(splice_form) @punctuation.special
(short_fn) @function

; Quote operators
"'" @punctuation.special
"~" @punctuation.special
"," @punctuation.special
";" @punctuation.special
"quote" @keyword
"quasiquote" @keyword
"unquote" @keyword
"splice" @keyword

; Definition forms
(def "def" @keyword)
(def name: (symbol) @function)
(def metadata: (keyword) @attribute)
(def metadata: (str_literal) @attribute)
(var ["var" "varglobal"] @keyword)
(var name: (symbol) @variable)
(var metadata: (keyword) @attribute)
(var metadata: (str_literal) @attribute)
(function_def ["defn" "defn-" "defglobal" "defmacro" "defmacro-" "defdyn" "fn" "macro"] @keyword)
(function_def name: (symbol) @function)
(function_def metadata: (keyword) @attribute)
(function_def metadata: (str_literal) @attribute)

; Control flow
(control_flow ["if" "if-let" "if-not" "if-with" "when" "when-let" "when-with" "unless" "unless-let" "cond" "case" "and" "or" "do" "not"] @keyword)

; Loop constructs
(loop_construct ["while" "for" "loop" "each" "eachk" "eachp" "forever" "repeat"] @keyword)

; Assignment
(assignment ["set" "setdyn" "put" "put-in" "update" "update-in"] @keyword)

; Special forms
(special_form ["upscope" "comptime" "try" "error" "errorf" "assert" "assertf" "defer" "edefer" "import" "use" "require" "module" "->" "->>" "-?>" "-?>>"] @keyword)

; Built-in operations
(operation ["+" "++" "+=" "-" "--" "-=" "*" "*=" "/" "/=" "%" "%=" "inc" "dec" "mod" "div" "abs" "sum" "product" "mean" "max" "min" "=" "not=" "<" "<=" ">" ">=" "compare" "deep=" "deep-not=" "band" "bor" "bxor" "bnot" "blshift" "brshift" "brushift" "array" "get" "get-in" "length" "empty?" "first" "last" "slice" "take" "take-until" "take-while" "drop" "drop-until" "drop-while" "reverse" "reverse!" "sort" "sort-by" "map" "mapcat" "filter" "keep" "reduce" "reduce2" "find" "find-index" "frequencies" "string" "describe" "table" "struct" "keys" "values" "pairs" "merge" "merge-into" "print" "prin" "printf" "eprint" "slurp" "spit" "flush"] @function.builtin)

; Namespace-qualified functions
((operation) @function.builtin
  (#match? @function.builtin "^[a-zA-Z][a-zA-Z0-9\\-_]*/[a-zA-Z][a-zA-Z0-9\\-_]*"))

; Function calls
(generic_tuple head: (symbol) @function)

; Brackets
"(" @punctuation.bracket
")" @punctuation.bracket
"[" @punctuation.bracket
"]" @punctuation.bracket
"{" @punctuation.bracket
"}" @punctuation.bracket
"@[" @punctuation.bracket
"@{" @punctuation.bracket

; Short function delimiters
"|" @punctuation.special