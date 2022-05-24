		/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
			DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
		    INGENIERA DE SOFTWARE
		                
			AUTORES:    Luca Manuel de Veintemilla - lmde2@espe.edu.ec
						Kevin Alexander Vargas - kavargas7@espe.edu.ec
						#Grupo 12
			FECHA DE CREACION:        24-05-2022 	
			FECHA DE MODIFICACION:    24-05-2022*/
			
#include "transformacionDecimaBinario.h"
#include <cstdio>
#include <conio.h>
#include <iostream> 
#include <cstring>

#define BIN 2
void transformacionDecimaBinario ::decimaBinario(int val,char* cad) {
    if (val >= 1) {
    decimaBinario(val / BIN,cad);		
	itoa((val%BIN),cad+strlen(cad),10);

    }
	strcat(cad,"\0");
}
