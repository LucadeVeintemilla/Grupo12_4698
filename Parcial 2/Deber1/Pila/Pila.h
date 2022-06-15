/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    Luca Manuel de Veintemilla - lmde2@espe.edu.ec
				Kevin Alexander Vargas - kavargas7@espe.edu.ec
					
	FECHA DE CREACION:        14-06-2022 	
	FECHA DE MODIFICACION:    14-06-2022
	Grupo #12
*/
#include <iostream>
#include<stdlib.h>
using namespace std;

class Nodo
{
	public:
    int valor;
    Nodo *siguiente;

};


void insertarPila(Nodo *&,int);
void mostrarPila(Nodo *&);
void eliminarPila(Nodo *&,int &);
int sumaImpar(Nodo *&, int);
