/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    Luca Manuel de Veintemilla - lmde2@espe.edu.ec
				Kevin Alexander Vargas - kavargas7@espe.edu.ec
					
	FECHA DE CREACION:        14-06-2022 	
	FECHA DE MODIFICACION:    14-06-2022
	Grupo #12
*/
#include <iostream>
#include "Validacion.h"

using namespace std;
// Clase que gestiona el ingreso de datos
class Ingreso {

public:
	string leer(string,int);
};
string Ingreso::leer(string mensage,int tipo) {
	Validacion validacion;
	string entrada;
	cout << mensage << endl;
	cin >> entrada;
	while (validacion.validar(entrada, tipo)) {
		cout << "Valor no valido reingrese, ingrese solo numeros" << endl;
		cin >> entrada;
	}
	return entrada;
}
