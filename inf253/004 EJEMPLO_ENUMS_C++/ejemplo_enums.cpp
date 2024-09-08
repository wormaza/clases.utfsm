#include <stdio.h>
#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

typedef enum Dias{
    Lunes=10,
    Martes,
    Miercoles,
    Jueves,
    Viernes
} DiasLaborales;

int main(int argc, char** argv)
{
    DiasLaborales lu = Lunes;
    cout << "Lunes = " << lu << endl;
    enum Dias ma = Martes;
    cout << "Martes = " << ma << endl;
    if(ma > lu){
        cout << "lunes menor a martes "<< endl;
    }else
    {
        cout << "lunes mayor a martes "<< endl;
    }
    if(ma == 11){
        cout << "Martes es 11 "<< endl;
    }

    auto dia = Viernes;
    cout << "typeid(dia).name() = " << typeid(dia).name() << endl;
    cout << "dia = " << dia << endl;
    return 0;
}
