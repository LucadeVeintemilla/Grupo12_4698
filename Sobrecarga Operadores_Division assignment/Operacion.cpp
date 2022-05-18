/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:        #Grupo 12
				Luca Manuel de Veintemilla - lmde2@espe.edu.ec
				Kevin Alexander Vargas - 	 kavargas7@espe.edu.ec
					#Grupo 7
				Brandon Raul Masacela - 	 brmasacela@espe.edu.ec
				Juan Francisco Reyes -       jfreyes4@espe.edu.ec
	FECHA DE CREACION:        16-05-2022 	
	FECHA DE MODIFICACION:    17-05-2022*/
#include "Operacion.h"

using namespace std;

Operacion::Operacion(int numerador){
	this->num1=numerador;
}
void Operacion::setNum1(int numerador){
	num1=numerador;
}
int Operacion::getNum1(){
	return num1;
}

double Operacion::operator/=(Operacion obj1){
	double r,a;
	int n,i;
	a=obj1.getNum1();
	cout<<"Ingrese un numero: ";
	cin>>r;
	cout<<"Ingrese el numero de veces que desea dividir: ";
	cin>>n;
	for(i=1;i<=n;i++){
		a/=r;
	}
	return a;
}
