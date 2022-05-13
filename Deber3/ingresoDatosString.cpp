		/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
			DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
		    INGENIERA DE SOFTWARE
		                
			AUTORES:    Luca Manuel de Veintemilla - lmde2@espe.edu.ec
						Kevin Alexander Vargas - kavargas7@espe.edu.ec
						#Grupo 12
			FECHA DE CREACION:        11-05-2022 	
			FECHA DE MODIFICACION:    12-05-2022*/
			
					
					
#include "ingresoDatosString.h"
#include <iostream>
#include <conio.h>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
IngresoString::IngresoString(){

}

char *IngresoString::ingresoDatosString (const char *msj){
    char *dato = new char[0],c;
    int i=0;
    printf("%s", msj);
    while((c = getch())!=13){
        if((c>=65&& c<=90) || (c>=97&& c<=122)){
            printf("%c", c);
            dato[i++]=c;
        }else if(c == '\b'){
            cout << "\b" ;
            dato[i--]=c;
        }
    }
    dato[i]= '\0';

    return dato;
}



int IngresoString::transString(){
    char dato[10];
    int valor = 0;
    strcpy(dato, ingresoDatosString("Ingrese el String: "));
    printf("\nRes:%s...",dato);
    return valor;
}
