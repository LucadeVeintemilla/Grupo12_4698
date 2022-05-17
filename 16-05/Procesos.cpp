#include "Procesos.h"


Procesos::Procesos(){

}

int Procesos::suma(int n){
	return n*5;
}

float Procesos::suma(int n , int m){
	return (float)n* (float)m; //PARA HACER CASTING EN FUNCIÓN (float)n* (float)m
}
double Procesos::suma(int n,double m){
	return (double)n* m;
}

char const *Procesos::suma(int a , int b, int c){
	
	
	return "hola mundo";
}