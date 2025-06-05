; Basic bracket pairs
("(" @open ")" @close)
("[" @open "]" @close) 
("{" @open "}" @close)

; String delimiters
("\"" @open "\"" @close)
("`" @open "`" @close)

; Long string delimiters  
("@\"" @open "\"" @close)
("@`" @open "`" @close)

; Buffer literals
("@\"" @open "\"" @close)
("@`" @open "`" @close)
