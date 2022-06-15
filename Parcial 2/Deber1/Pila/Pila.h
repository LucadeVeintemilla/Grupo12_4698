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
