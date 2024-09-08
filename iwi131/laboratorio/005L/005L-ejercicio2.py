s = input('Indique el texto de entrada: ')
n = 0
aux = ''
for c in s:
    if c == '+':
        n += int(aux)
        aux = ''
    elif c == '-':
        n -= int(aux)
        aux = '' 
    else:
        aux += c
print(s,' = ',n)