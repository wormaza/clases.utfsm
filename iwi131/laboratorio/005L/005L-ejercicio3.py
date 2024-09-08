s = input('Indique el texto de entrada: ')
pot = 0
naux = 0
n = 0
for c in s[-1::-1]:
    if c == 'd':
        naux = 1
    elif c == 'v':
        naux = 2    
    elif c == 'E':
        naux = 3
    elif c == '1':
        naux = 4
    elif c == 'O':
        naux = 5
    elif c == 'f':
        naux = 6
    elif c == '+':
        naux = 7    
    elif c == 'w':
        naux = 8
    elif c == 'r':
        naux = 9
    elif c == 'F':
        naux = 0
    n += (naux*(10**pot))    
    pot+=1
print(s,' equivale a ',n)