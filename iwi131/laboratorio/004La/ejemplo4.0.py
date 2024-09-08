n = int(input("Indique el número de veces: "))
tr = int(input("Referencia total: "))
t = 0
p = 0
while not(n <= 0 and (p%2==0)) and (tr > t):
    n -= 1 #n = n - 1
    p = int(input("Número: "))
    t = t + p
    print("total: ",t)
print("Total final: ",t," último valor ingresado: ",p)