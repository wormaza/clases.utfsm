#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

class Par
{
	public:
		int A;
        int B;
		Par(){};
        Par(int a, int b):A(a),B(b){};
		~Par()
		{
			cout <<"Se elimina"<< endl;
		}
		int Suma()
		{
			return A+B;
		}
};

int main(int argc, char** argv)
{
	Par p1(1,1);
    Par p2 = p1;
    cout << "P1.SUMA = " << p1.Suma() << " P2.SUMA = " << p2.Suma() << endl;
    p1.A = p1.B = 100;
    cout << "P1.SUMA = " << p1.Suma() << " P2.SUMA = " << p2.Suma() << endl;

	return 0;
}