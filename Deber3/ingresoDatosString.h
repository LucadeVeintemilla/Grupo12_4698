		/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
			DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
		    INGENIERA DE SOFTWARE
		                
			AUTORES:    Luca Manuel de Veintemilla - lmde2@espe.edu.ec
						Kevin Alexander Vargas - kavargas7@espe.edu.ec
						#Grupo 12
			FECHA DE CREACION:        11-05-2022 	
			FECHA DE MODIFICACION:    12-05-2022*/
				
				
#ifndef INGRESODATOSSTRING_H_INCLUDED
#define INGRESODATOSSTRING_H_INCLUDED

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <string.h>
using namespace std;
class IngresoString{
    public:
      IngresoString();
        virtual char *ingresoDatosString(const char*);
        virtual int transString();
};

#endif 
