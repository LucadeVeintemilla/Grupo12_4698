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
