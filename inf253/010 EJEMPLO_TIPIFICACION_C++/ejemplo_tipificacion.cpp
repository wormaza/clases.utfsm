#include <stdio.h>
#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

int main(int argc, char** argv)
{
    cout <<"***EJEMPLO TIPIFICACION EXPLICITA V/S IMPLICITA***"<<endl;
    cout <<"typeid(var).name() indica el tipo de la variable donde:"<<endl;
    cout <<"i --> int"<<endl;
    cout <<"c --> char"<<endl;
    cout <<"PKc --> cadena de caracteres (char)"<<endl;
    cout <<"d --> double"<<endl;
       
    //ejemplos explicita
    int x = 2; 
    cout << "typeid(x).name() = " << typeid(x).name() << endl;
    int y = 1; 
    cout << "typeid(y).name() = " << typeid(y).name() << endl;
    string s = "hola"; 
    cout << "typeid(s).name() = " << typeid(s).name() << endl;

    #pragma region USO DE auto
    //ejemplos implicita, uso de auto
    auto z = 1; 
    cout << "typeid(z).name() = " << typeid(z).name() << endl;
    auto w = "chao";
    cout << "typeid(w).name() = " << typeid(w).name() << endl;
    auto a = x + y;
    cout << "typeid(a).name() = " << typeid(a).name() << endl;
    auto b = s;
    cout << "typeid(b).name() = " << typeid(b).name() << endl;
    auto c = x / y; //ojo con los tipos involucrados
    cout << "typeid(c).name() = " << typeid(c).name() << endl;
    auto d = y / x;
    cout << "typeid(d).name() = " << typeid(d).name() << endl;
    auto f = 1.0/2.0;
    cout << "typeid(f).name() = " << typeid(f).name() << endl;
    //¿Que pasa aquí?
    auto e = 1/2.0;
    cout << "typeid(e).name() = " << typeid(e).name() << endl;
    auto g = 1.0/2;
    cout << "typeid(g).name() = " << typeid(g).name() << endl;
    //a = b;//Ojo, pero no dinamica
    #pragma endregion
}
