x = int(input("Ingrese x: "))
i = 1
dif = abs(x - i**2)
while dif > abs(x - (i+1)**2):
    i += 1
    dif = abs(x - i**2);
    print("-> i = ",i)
print("R: ",(x + (i**2))/(2*i))