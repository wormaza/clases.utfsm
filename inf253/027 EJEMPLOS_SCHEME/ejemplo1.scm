;Ejemplos quote
(quote(a b c))
; considerar que ' es la abreviación de quote
'(a b c d)
; quote fuerza a que la lista sea tratada como de datos
(+ 1 2)
(quote(+ 1 2))
;quote no solo se utiliza para listas tmb se podría usar
;para evitar "ejemplo" sea tratado como una variable
(quote ejemplo)
'ejemplo
;para los strings y los numeros no es necesario utilizarlo
1
'1
(quote 1)
"hola"
'"hola"
(quote "hola")