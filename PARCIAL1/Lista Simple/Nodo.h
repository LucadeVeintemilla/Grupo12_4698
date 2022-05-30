#include<iostream>
using namespace std;
class Nodo{
	public:
		Nodo();
		Nodo(int _dato,Nodo* _sig);

		void set_dato(int _dato);
		void set_sig(Nodo* _sig);

		int get_dato();
		Nodo* get_sig();
	private:
		Nodo* sig;
		int dato;
};
Nodo::Nodo(){
	this->sig = NULL;
}
Nodo::Nodo(int _dato, Nodo* _sig){
	this->dato = _dato;
	this->sig = _sig;
	cout<<"Dato: "<<this->dato<<endl;
}
void Nodo::set_dato(int _dato){
	this->dato = _dato;
}
void Nodo::set_sig(Nodo* _sig){
	this->sig = _sig;
}
int Nodo::get_dato(){
	return this->dato;
}
Nodo* Nodo::get_sig(){
	return this->sig;
}
