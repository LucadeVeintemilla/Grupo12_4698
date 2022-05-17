
#include "Cadena.cpp"
#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	 Cadena C1("Juan ") , C2("Lopez");

   C1+C2;
   cout << "Atributo de C1 = " << C1.DameCadena() << endl;
 
	return 0;
}

