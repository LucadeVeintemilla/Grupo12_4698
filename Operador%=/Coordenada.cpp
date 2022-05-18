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
#include <iostream>
#include "Operacion.h"
using namespace std;
class Coordenada{
    private:
        int x;
        int y;
    public:
        Coordenada(int x, int y){
            this->x = x;
            this->y = y;
        }
        Coordenada(){
            this->x = 0;
            this->y = 0;
        }
        int getX(){
            return this->x;
        }
        int getY(){
            return this->y;
        }
        void setX(int x){
            this->x = x;
        }
        void setY(int y){
            this->y = y;
        }
        Coordenada operator*(int n){
            Coordenada c(this->x*n, this->y*n);
            return c;
        }
        Coordenada operator*(Coordenada c){
            Coordenada c2(this->x*c.getX(), this->y*c.getY());
            return c2;
        }
        void imprimir(){
            cout << "(" << this->x << "," << this->y << ")" << endl;
        }
};