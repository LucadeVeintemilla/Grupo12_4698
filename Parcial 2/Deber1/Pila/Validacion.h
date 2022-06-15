#include <iostream>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

// Clase que valida los datos de entrada

class Validacion {
public:
    Validacion();
    char *ingresoEntero(const char*);
    int convertirEntero();
	bool validar(string, int);
};


/**
	@param tipo, 1 para enteros, 2 para flotantes
*/
bool Validacion::validar(string entrada, int tipo) {
	int contador = 0;
	try {
	    if(entrada == ".")
        {
            throw 1;
        }
		for (int i = 0; i < entrada.length(); i++) {
			if (isalpha(entrada[i])) {
				throw 1;
			}
			if (!isdigit(entrada[i]) && tipo == 1) {
				throw 1;
			}
			if (entrada[i] == '.') {
				contador++;
			}
			if ((isdigit(entrada[i]) == 0 && entrada[i] != '.' && entrada[i] != '-') || (contador>1)) {
				throw 1;
			}
		}
	}
	catch (int e ) {
		return true;
	}
	return false;
}

Validacion::Validacion(){

}

char *Validacion::ingresoEntero (const char *msj){
    char *dato = new char[0],c;
    int i=0;
    printf("%s", msj);
    while((c = getch()) !=13){
        if(c >= '0' && c <= '9' ){
			
            printf("%c", c);
            dato[i++]=c;
            
            
        } if(c == 127 || c == 8){
        cout << "\b \b" ;
        dato[i--]=c;
        }

    }
    dato[i]= '\0';
    return dato;
}


int Validacion::convertirEntero(){
    char dato[10];
    int valor = 0;
    strcpy(dato, ingresoEntero(""));
    valor=atoi(dato);
    return valor;
}