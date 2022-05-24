		/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
			DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
		    INGENIERA DE SOFTWARE
		                
			AUTORES:    Luca Manuel de Veintemilla - lmde2@espe.edu.ec
						Kevin Alexander Vargas - kavargas7@espe.edu.ec
						#Grupo 12
			FECHA DE CREACION:        24-05-2022 	
			FECHA DE MODIFICACION:    24-05-2022*/
#include <cstring>
#include <iostream>
#include "transformacionDecimaBinario.cpp"
using namespace std;
int main(int argc, char** argv) {
char *cad = new char[10];
cad[0]= '\0';
transformacionDecimaBinario obj;
obj.decimaBinario(124,cad);
printf("%s",cad);

}