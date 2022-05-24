#include <iostream>
#include "Operacion.cpp"
using namespace std;


int main()
{
    int a,b,c;
    cout << "Introduzca tres enteros: "<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cout <<"\nEl maximo comun divisor es: " <<endl;
    cout<<mcd(a,mcd(b,c));
	return 0;
}
