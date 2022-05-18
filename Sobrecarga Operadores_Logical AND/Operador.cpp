/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    Luca Manuel de Veintemilla - lmde2@espe.edu.ec
				Kevin Alexander Vargas - 	 kavargas7@espe.edu.ec
					#Grupo 12
					#Grupo 7
				Brandon Raul Masacela - 	 brmasacela@espe.edu.ec
				Juan Francisco Reyes -       jfreyes4@espe.edu.ec
	FECHA DE CREACION:        16-05-2022 	
	FECHA DE MODIFICACION:    17-05-2022
*/

#include "Operador.h"

Operador::Operador(bool a)
{    
	valor=a;
}

void Operador::setN(bool a)
{
    valor=a;
}

bool Operador::getN()
{
	return valor;
}


bool Operador::operator && (Operador L)
{
	return L.valor;
}
