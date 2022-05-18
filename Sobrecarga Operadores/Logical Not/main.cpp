/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    Luca Manuel de Veintemilla - lmde2@espe.edu.ec
				Kevin Alexander Vargas - 	 kavargas7@espe.edu.ec
					#Grupo 12
					* 
				Brandon Raul Masacela - 	 brmasacela@espe.edu.ec
				Juan Francisco Reyes -       jfreyes4@espe.edu.ec
	FECHA DE CREACION:        16-05-2022 	
	FECHA DE MODIFICACION:    17-05-2022*/
	
#include "Array.cpp"
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	Array num;
	int a,b,x;
	
	cout << "Ingrese primer numero"  << "\n";
    
	cin >> a; 
	
	cout << "Ingrese segundo numero"  << "\n";
    
	cin >> b; 
	int res=0;
	res=a+b;
	if(res%2==0){
		 x=0;
		 }else{x=10;}
	
	
    num.setN(x);
    cout << "1 true / 0 false:"<<endl;
    cout << "Antes del Logical Not:";
    num.dispNum(); 
    cout << endl;
     
    !num;
    cout << "Despues del logical not:";
    num.dispNum(); 
    cout << endl;
       
	return 0;
}

