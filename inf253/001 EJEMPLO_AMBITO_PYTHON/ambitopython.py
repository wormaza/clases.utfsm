a = 1
b = 2

def sumasimple1():
    print('from sumasimple1',a+b) 

def sumasimple2():
    print('from sumasimple2',a+b)
    a = 20
    b = 20

def sumasimple3():
    global a
    global b
    a = 4
    b = 3
    print ('from sumasimple3',a+b)

def sumasimple4():
    a = 10
    b = 10
    print ('from sumasimple4',a+b)

sumasimple1()
#sumasimple2()
sumasimple3()
sumasimple4()
print('a: ',a)
print('b: ',b)