; Basic bracket indentation
"(" @indent
")" @outdent
"[" @indent
"]" @outdent
"{" @indent
"}" @outdent

; Indent contents of data structures
(array) @indent
(table) @indent
(struct) @indent
(tuple) @indent

; Additional indentation for multi-line forms
(short_fn) @indent