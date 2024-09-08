#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    bool t = true;
    int w = 0;
    int v = 0;

    if(w=w+1 > v)
        cout << "w: "<<w<<" v: "<<v<<endl;

    if(w)
        cout << "w: "<<w<<endl;

    if(v)
        cout << "v: "<<v<<endl;

    if(--v)
        cout << "v: "<<v<<endl;

    //cortocircuito
    if(t || ++w)
        cout << "w: "<<w<<endl;
    
    if(t && ++w)
        cout << "w: "<<w<<endl;

    t = false;
    if(t && ++w)
        cout << "w: "<<w<<endl;

    cout << "w: "<<w<<" v: "<<v<<endl;
    t = ++w > 0 || --v < 0;
    cout << "w: "<<w<<" v: "<<v<<endl;

    //tipo de operadores
    //unario
    w++;
    ++w;
    //binario
    w = w + 1;
    //ternario
    int a = 0;
    a = w > v ? 1 : 2;
    a = 0;
    w > v ? a = 3 : a = 4;
    int b = 0;
    a = (b = 2) * 2;

    return 0;
}
