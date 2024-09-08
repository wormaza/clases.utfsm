#include <stdio.h>
#include <iostream>
#include <string>
#include <typeinfo>
#include <climits>
#include <limits.h>
using namespace std;

int main(int argc, char** argv)
{
    int x = INT_MAX;
    cout <<"x: "<< x <<" v/s " << "++x: "<< ++x <<endl;
    int y = INT_MIN;
    cout <<"y: "<< y <<" v/s " << "--y: "<< --y <<endl;

    return 0;
}
