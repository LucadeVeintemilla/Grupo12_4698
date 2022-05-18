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
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


class matriz{
    private:
        int **m;
        int filas;
        int columnas;
    public:
        matriz(int filas, int columnas){
            this->filas = filas;
            this->columnas = columnas;
            this->m = new int*[filas];
            for(int i = 0; i < filas; i++){
                this->m[i] = new int[columnas];
            }
        }
        matriz(){
            this->filas = 0;
            this->columnas = 0;
            this->m = NULL;
        }
        int getFilas(){
            return this->filas;
        }
        int getColumnas(){
            return this->columnas;
        }
        int getValor(int f, int c){
            return this->m[f][c];
        }
        void setValor(int f, int c, int v){
            this->m[f][c] = v;
        }
        void imprimir(){
            for(int i = 0; i < this->filas; i++){
                for(int j = 0; j < this->columnas; j++){
                    cout << this->m[i][j] << " ";
                }
                cout << endl;
            }
        }
        matriz operator%=(int n){
            for(int i = 0; i < this->filas; i++){
                for(int j = 0; j < this->columnas; j++){
                    this->m[i][j] = this->m[i][j]%n;
                }
            }
            return *this;
        }
};
