
/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    Luca Manuel de Veintemilla - lmde2@espe.edu.ec
				Kevin Alexander Vargas - kavargas7@espe.edu.ec
					
	FECHA DE CREACION:        10-05-2022 	
	FECHA DE MODIFICACION:    11-05-2022
	Grupo #12
*/

#include <iostream>
#include "Fracciones.h"


using namespace std;


template<typename T>
Fraccion<T>::Fraccion(int dim) {

	this->numeros = (T*)calloc(dim, sizeof(T*));

}

template<typename T>
void Fraccion<T>::insertarElementos() {
	
	int n = 0, d = 0; 
	for (int i = 0; i < 4; i++) {
		if ((i % 2) != 0) {
			d++;
			cout << "Digite el " << d << " denominador: ";
			cin >> numeros[i];
		}
		else if ((i % 2) == 0){
			n++;
			cout << "Digite el " << n << " numerador: ";
			cin >> numeros[i];
		}
	}
}


template<typename T>
void Fraccion<T>::elegirTipoDeDato() {

	int opcion;
	cout << "Elige el dato con el que quieras trabajar: " << endl;
		cout << "1. Numeros Enteros " << endl; 
		cout << "2. Numeros Flotantes" << endl; 
	cin >> opcion;
	system("cls");

	if (opcion == 1)
	{
		Fraccion<int> enteros(4);
		enteros.insertarElementos();
		enteros.calcular2();

	}
	else if (opcion == 2)
	{
		Fraccion<float> flotantes(4);
		flotantes.insertarElementos();
		flotantes.calcular2();

	}
}
template<typename T>
void Fraccion<T>::calcular2() {

	for (int i = 0; i < 4; i++) {
		cout << "\t" << numeros[i];
		cout << "\n";
	}

	float n1, n2, d1, d2; 

	n1 = this->numeros[0];
	n2 = this->numeros[2];

	d1 = this->numeros[1];
	d2 = this->numeros[3];

	float num = ((n1 * d2) + (n2 * d1));
	float den = (d1 * d2);
	cout << "El Numerador: " << num << endl;
	cout << "El Denominador: " << den << endl;
	
	cout << "\n";

}