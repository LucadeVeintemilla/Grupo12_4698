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
		cout << "ERROR  - ingrese solo numeros" << endl;
		cin >> entrada;
	}
	return entrada;
}
