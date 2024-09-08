#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

#pragma region  MODO IN
void SumaUnoIN(int b)
{
    cout <<"&b: "<< &b << "SumaUno - IN: " << ++b<< endl;
}

void SumaUnoIN2(const int &b)//paso por referencia es desreferenciación implicita
{
    //++b;//Ya no se puede
    cout <<"&b: "<< &b << "SumaUno - IN2: " << b+1<< endl;
}

void SumaUnoIN3(const int* b)//uso de * es desreferenciacion explicita
{
    //++b;//Ya no se puede
    cout <<"&b: "<< b << "SumaUno - IN3: " << *b+1<< endl;
}

#pragma endregion

#pragma region MODO INOUT
void SumaUnoINOUT(int &b)
{
    cout <<"&b: "<< &b << "SumaUno - INOUT: " << ++b<< endl;
}

void SumaUnoINOUT2(int* b)
{
    cout <<"&b: "<< b << "SumaUno - INOUT2: " << ++(*b)<< endl;
}
#pragma endregion

#pragma region MODO OUT
void SumaUnoOUT(int &b)
{
    b = 100;
    cout <<"&b: "<< &b << "SumaUno - OUT: " << b << endl;
}

void SumaUnoOUT2(int* b)
{
    (*b) = 200;
    cout <<"&b: "<< b << "SumaUno - OUT2: " << *b << endl;
}
#pragma endregion

int main(int argc, char** argv)
{
    int a = 10;
    cout <<"a: "<< a <<"&a: "<< &a <<endl;
    
    SumaUnoIN(a);
    cout <<"a: "<< a <<"&a: "<< &a <<endl;
    
    SumaUnoIN2(a);
    cout <<"a: "<< a <<"&a: "<< &a <<endl;
    
    SumaUnoIN3(&a);
    cout <<"a: "<< a <<"&a: "<< &a <<endl;
    
    SumaUnoOUT(a);
    cout <<"a: "<< a <<"&a: "<< &a <<endl;
    
    SumaUnoOUT2(&a);
    cout <<"a: "<< a <<"&a: "<< &a <<endl;
    
    SumaUnoINOUT(a);
    cout <<"a: "<< a <<"&a: "<< &a <<endl;
    
    SumaUnoINOUT2(&a);
    cout <<"a: "<< a <<"&a: "<< &a <<endl;

    return 0;
}


