/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    Luca Manuel de Veintemilla - lmde2@espe.edu.ec
				Kevin Alexander Vargas - 	 kavargas7@espe.edu.ec
					#Grupo 12
					#Grupo 7
				Brandon Raul Masacela - 	 brmasacela@espe.edu.ec
				Juan Francisco Reyes -       jfreyes4@espe.edu.ec
	FECHA DE CREACION:        16-05-2022 	
	FECHA DE MODIFICACION:    17-05-2022
*/

#include <iostream>
#include <conio.h>
#include "Operador.cpp"

using namespace std;

int main(){
	int x1, y1, res1;
	int x2, y2, res2;
	int cambio = 0;
	
	Operador a;
	
	cout << "Ingrese un valor para x1: "; cin >> x1;
	cout << "Ingrese un valor para y1: "; cin >> y1;
	cout << "Ingrese un valor para x2: "; cin >> x2;
	cout << "Ingrese un valor para x2: "; cin >> y2;
	
	res1 = x1 * y1;
	res2 = x2 * y2;
	
	if ((res1 == 24) && (res2==24))
	{
		cambio = 1;
		cout << "\nAmbas multiplicaciones dan 24" << endl;
	}	
	else 
	{
		cambio = 0;
		cout << "\nLas multiplicaciones son diferentes" << endl;
	}
			
	a.setN(cambio);
	a.operator &&(a);
	cout << a.operator &&(a) << endl;
	
	
}
