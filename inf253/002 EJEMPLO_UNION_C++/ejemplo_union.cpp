#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

#pragma region DEFINICIONES EJEMPLO_1

union PersonaU { 
    int Edad; 
    float Peso;  
}; 

struct PersonaS {
    int Edad;
    float Peso;
};
#pragma endregion

#pragma region DEFINICIONES EJEMPLO_2
union UnionEjemplo2
{
    int numero;
    char caracter;
};

#pragma endregion

int main(int argc, char** argv)
{
	
    #pragma region EJEMPLO_1
    union PersonaU pers_union;
    struct PersonaS pers_struct; 
    
    pers_union.Edad = pers_struct.Edad= 10;
    cout << "<struct Edad> "<< pers_struct.Edad << " <union Edad> " << pers_union.Edad << endl;
    cout << "<struct Edad> "<< &pers_struct.Edad << " <union Edad> " << &pers_union.Edad << endl;

    pers_union.Peso = pers_struct.Peso = 10.2;
    cout << "<struct Nombre> "<< pers_struct.Peso << " <union Nombre> " << pers_union.Peso << endl;
    cout << "<struct Nombre> "<< &pers_struct.Peso << " <union Nombre> " << &pers_union.Peso << endl;
    cout << " *** " << endl;
    cout << "<struct Edad> "<< pers_struct.Edad << " <union Edad> " << pers_union.Edad << endl;
    cout << "<struct Edad> "<< &pers_struct.Edad << " <union Edad> " << &pers_union.Edad << endl;

    #pragma endregion

    #pragma region EJEMPLO_2
    union UnionEjemplo2 e;
    e.numero = 100;
    //cout << "typeid(e).name() = " << typeid(e).name() << endl;
    cout << "typeid(e.numero).name() = " << typeid(e.numero).name() << endl;
    cout << "typeid(e.caracter).name() = " << typeid(e.caracter).name() << endl;
    cout << "numero: "<<e.numero<<endl;
    cout << "caracter: "<<e.caracter<<endl;
    cout << "&e: "<<&e<<endl;
    cout << "&numero: "<<&e.numero<<endl;
    cout << "&caracter: "<<&e.caracter<<endl;
    e.caracter = 'W';
    //cout << "typeid(e).name() = " << typeid(e).name() << endl;
    cout << "typeid(e.numero).name() = " << typeid(e.numero).name() << endl;
    cout << "typeid(e.caracter).name() = " << typeid(e.caracter).name() << endl;
    cout << "numero: "<<e.numero<<endl;
    cout << "caracter: "<<e.caracter<<endl;
    cout << "&e: "<<&e<<endl;
    cout << "&numero: "<<&e.numero<<endl;
    cout << "&caracter: "<<&e.caracter<<endl;
    #pragma endregion
	
    return 0;
}