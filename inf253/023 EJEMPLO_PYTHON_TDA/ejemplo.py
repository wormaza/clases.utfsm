class Recta:
    def __init__(self, x1, y1, x2, y2, name):
        self.x1 = x1
        self.y1 = y1
        self.x2 = x2
        self.y2 = y2
        self.name = name

    def __del__(self):
        print("Recta ",self.name," eliminada")

    def m(self):
        if self.x1 == self.x2:
            return None
        return (self.y2 - self.y1) / (self.x2 - self.x1)

    def b(self):
        m = self.m()
        if m is None:
            return None  
        return self.y1 - (m * self.x1)

    def modificar_punto1(self, x, y):
        if not (x == self.x2 and y == self.y2):
            self.x1 = x
            self.y1 = y

    def modificar_punto2(self, x, y):
        if not (x == self.x1 and y == self.y1):
            self.x2 = x
            self.y2 = y


L1 = Recta(1, 2, 3, 4, 'L1')
print(L1.name,": m= ",L1.m()," ,b= ",L1.b())
