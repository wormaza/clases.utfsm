def multiplicador(factor):
    def multiplicacion(entrada):
        return factor * entrada
    return multiplicacion

multiplicador_por2 = multiplicador(2)
multiplicador_por3 = multiplicador(3)
i = int(input("i: "))
print(i,' x 2 = ',multiplicador_por2(i))
print(i,' x 3 = ',multiplicador_por3(i))
