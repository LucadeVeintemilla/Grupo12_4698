		/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
			DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
		    INGENIERA DE SOFTWARE
		                
			AUTORES:    Luca Manuel de Veintemilla - lmde2@espe.edu.ec
						Kevin Alexander Vargas - kavargas7@espe.edu.ec
						#Grupo 12
			FECHA DE CREACION:        11-05-2022 	
			FECHA DE MODIFICACION:    12-05-2022*/
			
						
						
	
	
#include "ingresoDatos.h"
#include <iostream>
#include <conio.h>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

Ingreso::Ingreso(){

}

char *Ingreso::ingresoDatosEntero (const char *msj){
    char *dato = new char[0],c;
    int i=0;
    printf("%s", msj);
    while((c = getch()) !=13){
        if(c >= '0' && c <= '9'){
            printf("%c", c);
            dato[i++]=c;
        } if(c == '\b'){
        cout << "\b" ;
        dato[i--]=c;
        }

    }
    dato[i]= '\0';
    return dato;
}



int Ingreso::transEntero(){
    char dato[10];
    int valor = 0;
    strcpy(dato, ingresoDatosEntero("Ingrese el numero entero: "));
    valor=atoi(dato);
    valor=valor*2;
    printf("\nRes=%d...",valor);
    return valor;
}



char *Ingreso::ingresoDatosFloat (const char *msj){
    char *dato = new char[0],c;
    int i=0;
    int contador = 0;
    bool bandera = false; 				//****BANDERAS*****
    printf("%s", msj);
    while((c = getch())!=13){
        if(c==46 && contador <1){
            contador++;
            bandera=true;
            printf("%c", c);
            dato[i++]=c;
        }else if((c>=48 && c<=57)){
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



int Ingreso::transFloat(){
    char dato[10];
    int valor = 0;
    float valorFlotante;
    strcpy(dato, ingresoDatosFloat("Ingrese el numero flotante: "));
    valorFlotante=atof(dato)*2;
    printf("\nRes=%f...",valorFlotante);
    return valor;
}
