		/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
			DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
		    INGENIERA DE SOFTWARE
		                
			AUTORES:    Luca Manuel de Veintemilla - lmde2@espe.edu.ec
						Kevin Alexander Vargas - kavargas7@espe.edu.ec
						#Grupo 12
			FECHA DE CREACION:        11-05-2022 	
			FECHA DE MODIFICACION:    12-05-2022*/
			
			
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <cstring>
#include <stdio.h>

#include "ingresoDatos.cpp"
#include "ingresoDatosString.cpp"


using namespace std;


int main (int argc, char** argv){


    Ingreso ing;
    IngresoString str;
    
    int opcion;
    
    

    do{
		
        cout << "\n\nMenu de Opciones" << endl;
        cout << "1. Convertir a Entero" << endl;
        cout << "2. Convertir a String" << endl;
        cout << "3. Convertir a Float" << endl;
        cout << "4. Irse del programa" << endl;

        cout << "\nIngrese una opcion: ";
        cin >> opcion;

		if(opcion==1)

		{
			    ing.transEntero();
                fflush(stdin);
		}
		
		else if(opcion==2)
		{
			    str.transString();
               fflush(stdin);
		}
		
		else if(opcion==3)
		{
			    ing.transFloat();
                fflush(stdin);
		}
		
		else if (opcion == 4)
		
					cout << "Adios... \n";
		
		else if ((opcion <1) || (opcion >= 4))
		cout << "Error.\n";
}while(opcion!=4);


    return 0;
}
