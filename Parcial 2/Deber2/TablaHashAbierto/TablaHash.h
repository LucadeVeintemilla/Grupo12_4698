#pragma once 
#include <iostream>
#include "Nodo.h"
#include "Nodo.cpp"

class TablaHashAbierto{
    private:
        NodoCircular **tabla;
    public:
        TablaHashAbierto();
        ~TablaHashAbierto();
        void insertar(string cad);
        void eliminar(string cad);
        void buscar(string cad);
        void imprimir();
        int hash(string cad);     
};