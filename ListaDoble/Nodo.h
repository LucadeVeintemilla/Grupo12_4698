/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    Luca Manuel de Veintemilla - lmde2@espe.edu.ec
				Kevin Alexander Vargas - kavargas7@espe.edu.ec
					
	FECHA DE CREACION:        02-06-2022 	
	FECHA DE MODIFICACION:    02-06-2022
	Grupo #12
*/

#include <iostream>

class Nodo{
	public:
		Nodo (int);
		Nodo *getSiguiente();
		void setSiguiente(Nodo *);
		Nodo *getAnterior();
		void setAnterior(Nodo *);
		int getValor();
		void setValor(int);
	private:
		int valor;
		Nodo *siguiente=NULL;
		Nodo *anterior=NULL;
};
Nodo::Nodo(int _valor){
	this->valor=_valor;
}
Nodo *Nodo::getAnterior(){
	return anterior;
}
void Nodo::setAnterior(Nodo *nodo){
	this->anterior=nodo;
}
Nodo *Nodo::getSiguiente(){
	return siguiente;
}
void Nodo::setSiguiente(Nodo *nodo){
	this->siguiente=nodo;
}

int Nodo::getValor(){
	return valor;
}
void Nodo::setValor(int _valor){
	this->valor=_valor;
}


