n = int(input("Indique el número de veces: "))
t = 0
while n > 0 and (p%2==0):
    n -= 1 #n = n - 1
    p = int(input("Número: "))
    t = t + p
    print("total: ",t)
print("Total final: ",t," último valor ingresado: ",p)