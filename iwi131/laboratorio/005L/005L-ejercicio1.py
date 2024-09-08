s = input('Indique el texto de entrada: ')
sout = ''
for c in s.lower():
    if c == ' ':
        sout+=c
    elif ord(c) >= 97 and ord(c) <= 122:
        sout+=c
print('IN:',s,' OUT: ',sout.upper()) 
