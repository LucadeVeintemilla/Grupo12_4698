/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    Luca Manuel de Veintemilla - lmde2@espe.edu.ec
				Kevin Alexander Vargas - kavargas7@espe.edu.ec
					#Grupo 12
	FECHA DE CREACION:        16-05-2022 	
	FECHA DE MODIFICACION:    17-05-2022*/
#include "Array.h"
using namespace std;
Array::Array(int x)
{    n=x;
}
		void Array::setN(int x)
        {
            n=x;
        }
       
        void Array::dispNum(void)
        {
            cout << "value of n is: " << n;
        }
        
        void Array::operator ! (void)
        {
            n=!n;
        }

