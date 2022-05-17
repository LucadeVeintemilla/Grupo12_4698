


#include <iostream>
#include "Complejo.cpp"
using namespace std;
int main(int argc, char **argv)
{
	Complejo A(1.5,2.3), B(5.2,4.7), C(1.1,0.4), D;

   D= A + B - C;
   cout << "D = " << D.DameR()<<" + "<< D.DameI() << "i" 
           << endl;
	return 0;
}

