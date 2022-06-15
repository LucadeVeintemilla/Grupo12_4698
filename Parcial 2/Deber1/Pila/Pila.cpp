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
#include <stdlib.h>
#include "Pila.h"

#include "Ingreso.h"
using namespace std;
void insertarPila(Nodo *&pila,int v)
{
    Nodo *insPila=new Nodo();
    insPila->valor=v;
    insPila->siguiente=pila;
    pila=insPila;


}



void mostrarPila(Nodo *&pila)
{
    Nodo *aux;

    if(pila==NULL)
    {
        cout<<"Pila Vacia"<<endl;

    }
    else
    {
        aux=pila;
        while(aux!=NULL)
        {
            cout<<"-"<<aux->valor<<endl;
            aux=aux->siguiente;
        }
    }

}

void eliminarPila(Nodo *&pila,int &v)
{
    Nodo *aux=pila;
    v=aux->valor;
    pila=aux->siguiente;
    delete aux;


}
int sumaImpar (Nodo *&pila, int inicio){
	int elem, suma  = 0;
	Nodo *aux=pila;
	
	if(pila==NULL)
    {
        cout<<"Pila Vacia"<<endl;
			
	}
	else{
		
		while(aux!=NULL)
        {
            cout<<"-"<<aux->valor<<endl;
            elem = aux->valor;
			
					
				if((elem % 2 !=0)){ 	
					suma += elem;
				}
            aux=aux->siguiente;
        }
	
	}
	cout<<suma<<endl;
	return suma;
}








