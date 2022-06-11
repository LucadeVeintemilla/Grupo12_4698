#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

#include <string.h>
#include <iostream>
using namespace std;

class Persona
{
private:
	char* nombre;
	char* celular;
	char* modelo;
	char* color;
	float precio;

public:

	Persona(char _nombre[], char _celular[], char _modelo[], char _color[], float _precio);
	//~Persona();
	Persona& operator=(const Persona& c)
	{
		if (this != &c)
		{
			nombre = new char[strlen(c.nombre) + 1];
			strcpy(nombre, c.nombre);

			celular = new char[strlen(c.celular) + 1];
			strcpy(celular, c.celular);

			modelo = new char[strlen(c.modelo) + 1];
			strcpy(modelo, c.modelo);

			color = new char[strlen(c.color) + 1];
			strcpy(color, c.color);

			precio = c.precio;
		}
		return *this;
	}
	bool operator>(const Persona& d) const {
		return strcmp(nombre, d.nombre) > 0;
	}
	bool operator<=(const Persona& d) const {
		return strcmp(nombre, d.nombre) <= 0;
	}
	bool operator!=(const Persona& d) const {
		return strcmp(nombre, d.nombre);
	}
	bool operator<(const Persona& d) const {
		return strcmp(nombre, d.nombre) < 0;
	}

	//Getters
	char* getNombre() {
		return nombre;
	}
	char* getCelular() { return celular; }
	char* getModelo() { return modelo; }
	char* getColor() { return color; }
	float getPrecio() { return precio; }


};

Persona::Persona(char _nombre[], char _celular[], char _modelo[], char _color[], float _precio) {
	nombre = new char[strlen(_nombre) + 1];
	strcpy(nombre, _nombre);
	celular = new char[strlen(_celular) + 1];
	strcpy(celular, _celular);
	modelo = new char[strlen(_modelo) + 1];
	strcpy(modelo, _modelo);
	color = new char[strlen(_color) + 1];
	strcpy(color, _color);
	precio = _precio;
}
//~Persona::Persona(){
//	delete[] nombre;
//}


ostream& operator <<(ostream& os, Persona a)
{
	os << a.getNombre() << "\t";
	os << a.getCelular() << "\t";
	os << a.getModelo() << "\t";
	os << a.getColor() << "\t";
	os << a.getPrecio() << endl;
	return os;
}

#endif // PERSONA_H_INCLUDED
