; Basic bracket indentation
[
    "("
    "["
    "{"
] @indent

; Decrease indentation for closing brackets
[
    ")"
    "]"
    "}"
] @outdent

; Special forms that should indent their body
(tuple
  .
  (symbol) @_keyword
  (#match? @_keyword "^(def|defn|defmacro|defglobal|fn|do|let|if|when|unless|cond|case|while|for|loop|each|try|with|with-syms|module)$")
  (tuple)? @indent
  .
  (_) @indent)

; Function definitions with parameter lists
(tuple
  .
  (symbol) @_def
  (#match? @_def "^(defn|fn)$")
  .
  (symbol)
  .
  (tuple) @indent.params
  .
  (_) @indent)

; Let bindings and similar forms
(tuple
  .
  (symbol) @_let
  (#match? @_let "^(let|with-dyns|with-vars)$")
  .
  (tuple) @indent.bindings
  .
  (_) @indent)

; Conditional forms
(tuple
  .
  (symbol) @_cond
  (#match? @_cond "^(if|when|unless|cond|case)$")
  .
  (_) @indent
  .
  (_) @indent)

; Loop constructs
(tuple
  .
  (symbol) @_loop
  (#match? @_loop "^(while|for|loop|each)$")
  .
  (_) @indent
  .
  (_) @indent)

; Threading macros
(tuple
  .
  (symbol) @_thread
  (#match? @_thread "^(->|->>|as->|some->|some->>|cond->|cond->>)$")
  .
  (_) @indent)

; Data structures
(array
  (_) @indent)

(table
  (_) @indent)

(struct
  (_) @indent)
