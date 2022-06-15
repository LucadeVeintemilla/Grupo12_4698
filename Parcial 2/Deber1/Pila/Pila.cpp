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








