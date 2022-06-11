#include <iostream>
#include <ctype.h>
#include <string.h>
#pragma once
using namespace std;

// Clase que valida los datos de entrada

class Validacion {
public:
    bool validar(string, int);
    Validacion();
    char* ingresoFlotante(const char*);
    float convertirFlotante();
    char* ingresoEntero(const char*);
    int convertirEntero();
    char* ingresoString(const char*);
    char* convertirString();
};

/**
    @param tipo, 1 para enteros, 2 para flotantes
*/
bool Validacion::validar(string entrada, int tipo) {
    int contador = 0;
    try {
        if (entrada == ".")
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
            if ((isdigit(entrada[i]) == 0 && entrada[i] != '.' && entrada[i] != '-') || (contador > 1)) {
                throw 1;
            }
        }
    }
    catch (int e) {
        return true;
    }
    return false;
}

Validacion::Validacion() {

}

char* Validacion::ingresoFlotante(const char* msj) {
    char* dato = new char[0], c;
    int i = 0;
    int contador = 0;
    bool bandera = false; 				//*BANDERAS**
    printf("%s", msj);
    while ((c = _getch()) != 13) {
        if (c == 46 && contador < 1) {
            contador++;
            bandera = true;
            printf("%c", c);
            dato[i++] = c;
        }
        else if ((c >= 48 && c <= 57)) {
            printf("%c", c);
            dato[i++] = c;
        }
        else if (c == 127 || c == 8) {
            cout << "\b \b";
            dato[i--] = c;

            for (int i = 0; i <= (sizeof dato); i++) {
                if (dato[i] == 46) {
                    contador = 0;
                }
            }
        }
    }
    dato[i] = '\0';
    return dato;
}


float Validacion::convertirFlotante() {
    char dato[10];
    float valor = 0;
    strcpy_s(dato, ingresoFlotante("\t"));
    valor = atof(dato);
    return valor;
}

char* Validacion::ingresoEntero(const char* msj) {
    char* dato = new char[0], c;
    int i = 0;
    printf("%s", msj);
    while ((c = _getch()) != 13) {
        if (c >= '0' && c <= '9') {

            printf("%c", c);
            dato[i++] = c;


        } if (c == 127 || c == 8) {
            cout << "\b \b";
            dato[i--] = c;
        }

    }
    dato[i] = '\0';
    return dato;
}

int Validacion::convertirEntero() {
    char dato[10];
    int valor = 0;
    strcpy_s(dato, ingresoEntero("Ingrese dato del tipo Entero: "));
    valor = atoi(dato);
    return valor;
}

char* Validacion::ingresoString(const char* msj) {
    char* dato = new char[0], c;
    int i = 0;
    printf("%s", msj);
    while ((c = _getch()) != 13) {
        if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || c == 32) {
            printf("%c", c);
            dato[i++] = c;
        }if (c == 127 || c == 8) {
            cout << "\b \b";
            dato[i--] = c;
        }
    }
    dato[i] = '\0';

    return dato;
}



char* Validacion::convertirString() {
    char dato[60];
    strcpy_s(dato, ingresoString("Ingrese dato del tipo String: "));
    //printf("\nResultado:%s...",dato);
    //cout<<"Soy el dato: "<<dato;
    return dato;
}
