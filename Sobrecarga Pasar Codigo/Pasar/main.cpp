
#include <iostream>
#include <conio.h>
#include "Reloj.cpp"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 using namespace std;
 
int main(int argc, char** argv) {
	Reloj R(10,59,56);
   for (int i=0; i<10; i++, ++R)
     cout <<setw(4)<< R.Hora() <<setw(4)<< R.Minuto() <<setw(4)<< R.Segundo() << endl;
	return 0;
}
