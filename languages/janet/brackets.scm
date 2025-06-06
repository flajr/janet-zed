; Parentheses in tuples
(tuple "(" @open ")" @close)

; Square brackets in arrays
(array "[" @open "]" @close)
(array "@[" @open "]" @close)

; Curly braces in structs
(struct "{" @open "}" @close)

; Curly braces in tables
(table "@{" @open "}" @close)

; Short function delimiters
(short_fn "|" @open "|" @close)