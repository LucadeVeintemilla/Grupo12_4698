/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    Luca Manuel de Veintemilla - lmde2@espe.edu.ec
				Kevin Alexander Vargas Paladines - 	 kavargas7@espe.edu.ec
						#Grupo 12 y Grupo7
					* 
				Brandon Raul Masacela - 	 brmasacela@espe.edu.ec
				Juan Francisco Reyes -       jfreyes4@espe.edu.ec
	FECHA DE CREACION:        16-05-2022 	
	FECHA DE MODIFICACION:    17-05-2022*/
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "Operacion.h"
#include "Coordenada.cpp"
using namespace std;

int main(){
    int opcion;
    cout<<"1.Sobrecargar con el operador %="<<endl;
    cin>>opcion;

                if(opcion==1){
                    int filas;
                    int columnas;
                    cout<<"Sobrecarga del operador %="<<endl;
                    cout<<"Ingresar las filas: ";
                    cin>>filas;
                    cout<<"Ingresar las columnas: ";
                    cin>>columnas;
                    matriz m1(filas,columnas);
                    for(int i = 0; i < filas; i++){
                        for(int j = 0; j < columnas; j++){
                            cout<<"Ingrese el valor de la posicion ("<<i<<","<<j<<"): ";
                            int v;
                            cin>>v;
                            m1.setValor(i,j,v);
                        }
                    }
                    cout<<"La primera matri<"<<endl;
                    m1.imprimir();
                    cout<<"La segunda matriz efectuando la sobrecarga del operador %="<<endl;
                    m1 %= 2;
                    m1.imprimir();
                    return 0;
                }else{
                    cout<<"Lo ingresado no es valido"<<endl;
                  return 0;
                }

    
}
