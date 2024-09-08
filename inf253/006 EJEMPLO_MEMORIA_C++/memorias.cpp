#include <stdio.h>
#include <iostream>
using namespace std;

void func(){
    int *c = NULL; //si no se inicializa con reserva, lo mejor es usar el valor NULL (nulo)
    c = new int;
    *c = 100;
    std::cout << "El valor en el heap: " << *c << std::endl;
    std::cout << "La dirección en el puntero (en stack): " << c << std::endl;
    std::cout << "La dirección del puntero: " << &c << std::endl;    
    delete c;
    c = NULL;
}

int main(int argc, char** argv)
{
    static int a = 10;
    int b;
    b = 45;
    func();
    std::cout << "a es " << a << "y b es " << b << std::endl;

    void* pv;
    pv = new int;
    *(int*)pv = 100;
    cout << "*pv: " << *(int*)pv <<endl;
    delete (int*)pv;
    pv = NULL;

    pv = new char;
    *(char*)pv = 'W';
    cout << "*pv: " << *(char*)pv <<endl;
    delete (char*)pv;
    pv = NULL;

    return 0;
}
