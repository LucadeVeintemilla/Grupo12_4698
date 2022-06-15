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
#include "Cola.h"
#include "Ingreso.h"
#pragma once
using namespace std;

void insertarCola(Nodo *&frente,Nodo *&fin,int v)
{
    Nodo *insCola=new Nodo();
    insCola->dato=v;
    insCola->siguiente=NULL;
    if(colaVacia(frente))
    {
        frente=insCola;
    }
    else
    {

        fin->siguiente=insCola;

    }
    fin=insCola;

}

bool colaVacia(Nodo *frente)
{
    if(frente==NULL)
        return true;
    else
        return false;
}


void mostrarCola(Nodo *&frente,Nodo *&fin)
{   Nodo *aux;

    if(frente==NULL)
    {
        cout<<"Lo sentimos pero tu cola esta vacia"<<endl;
    }
    else
    {
    aux=frente;
     while(aux!=NULL){

         cout<<aux->dato<<endl;
         aux=aux->siguiente;

     }

    }


}


void eliminarCola(Nodo *&frente,Nodo *&fin,int &v)
{
    v=frente->dato;
    Nodo *aux=frente;
    if(frente==fin)
    {
        frente=NULL;
        fin=NULL;

    }
    else
    {
        frente=frente->siguiente;

    }
    delete aux;

}

int sumaImpar(Nodo *pFrente){

	Nodo *aux = pFrente;
	
	int suma = 0;

	while(aux!= NULL){

		if(aux->dato % 2 != 0){ 

			suma += aux->dato;
		
		}

   		aux = aux->siguiente;
	}

return suma;
}




