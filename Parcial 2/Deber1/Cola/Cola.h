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
#include<conio.h>
#include<stdlib.h>
#pragma once
using namespace std;


class Nodo
{
public:
    int dato;
    Nodo *siguiente;
};

void insertarCola(Nodo *&,Nodo *&,int);
void mostrarCola(Nodo *&,Nodo *&);
bool colaVacia(Nodo *);
void eliminarCola(Nodo *&, Nodo *&, int &);
int sumaImpar (Nodo *);
