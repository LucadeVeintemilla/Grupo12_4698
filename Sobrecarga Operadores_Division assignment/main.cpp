/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:        #Grupo 12
				Luca Manuel de Veintemilla - lmde2@espe.edu.ec
				Kevin Alexander Vargas - 	 kavargas7@espe.edu.ec
					#Grupo 7
				Brandon Raul Masacela - 	 brmasacela@espe.edu.ec
				Juan Francisco Reyes -       jfreyes4@espe.edu.ec
	FECHA DE CREACION:        16-05-2022 	
	FECHA DE MODIFICACION:    17-05-2022*/
#include <iostream>
#include "Operacion.cpp"

using namespace std;

int main(int argc, char** argv) {
	double t,b;
	cout<<"Ingrese un numero: ";
	cin>>b;
	Operacion a(b);
	t=a.operator /=(a);
	printf("%.2f",t);
	return 0;
}
