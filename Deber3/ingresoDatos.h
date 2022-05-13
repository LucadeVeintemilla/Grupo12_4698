				/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
					DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
				    INGENIERA DE SOFTWARE
				                
					AUTORES:    Luca Manuel de Veintemilla - lmde2@espe.edu.ec
								Kevin Alexander Vargas - kavargas7@espe.edu.ec
									#Grupo 12
					FECHA DE CREACION:        10-05-2022 	
					FECHA DE MODIFICACION:    11-05-2022*/
					
					
#ifndef INGRESOENTERO_H_INCLUDED
#define INGRESODATOSENTERO_H_INCLUDED


#include <iostream>
#include <conio.h>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;

class Ingreso{
    public:
        Ingreso();
        virtual char *ingresoDatosEntero(const char*);
        virtual int transEntero();
        virtual char *ingresoDatosFloat(const char*);
        virtual int transFloat();
};


#endif 
