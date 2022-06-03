

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


