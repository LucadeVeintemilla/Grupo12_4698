/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    Luca Manuel de Veintemilla - lmde2@espe.edu.ec
				Kevin Alexander Vargas - kavargas7@espe.edu.ec
					
	FECHA DE CREACION:        14-06-2022 	
	FECHA DE MODIFICACION:    14-06-2022
	Grupo #12
*/

#include <iostream>
#include <stdlib.h>
#include "Cola.cpp"
#include <sstream>
using namespace std;




	//primero que entra ultimo sale
	
class Menu{
	public:
		Menu();
		void mostrar_menu();
		int opciones_menu();
		
    private:
        string dim;
        Ingreso ingreso;
        Validacion validar;
};
Menu::Menu(){
}
int Menu::opciones_menu(){
	int cant,i=0,v,op=1;
    	Nodo *pila=NULL;
		
	int opc;
	cout<<"PILA"<<endl;
    cout<<"1.Insertar"<<endl;
    cout<<"2.Mostrar"<<endl;
    cout<<"3.Eliminar"<<endl;
    cout<<"4.Impares"<<endl;
    cout<<"0.Salir del programa"<<endl;
	dim = ingreso.leer("Seleccione una opcion: ", 1);
	istringstream(dim)>>opc;
	return opc;
}
void Menu::mostrar_menu(){
	Nodo *frente=NULL;
    Nodo *fin=NULL;
    int v,i=0,cant;
    int opcion=1;
			
	int opc;
	
	do{
		system("cls");
		opc = this->opciones_menu();
		switch(opc)
		{
			
			case 1:{
				system("cls");
						cout<<"Cuantos datos va a ingresar"<<endl;
		            
		            
		            cant= validar.convertirEntero();
		            while(i<cant)
		            {
		            	cout<<endl;
		                cout<<"Ingrese:"<<endl;
		                
		                v= validar.convertirEntero();
		                insertarCola(frente,fin,v);
		                i++;
		            }
            
				break;
			}
			case 2:{
				system("cls");
				
				mostrarCola(frente,fin);
				break;
			}

			case 3:{
			    system("cls");
								   while(frente!=NULL)
	            {
	                eliminarCola(frente,fin,v);
	                if(frente!=NULL)
	                {
	                    cout<<v<<"|"<<endl;
	
	
	                }
	                else
	                {
	                    cout<<v<<"."<<endl;
	                }
	            }
			}
			
			case 4:{
			    system("cls");
			    mostrarCola(frente,fin);
			    sumaImpar(frente);
            	cout<<"Suma: "<<sumaImpar(frente)<<endl;
			    break;
			    
			}

			case 0:{
			    system("cls");
				cout<<"--Gracias por usar mi programa--"<<endl;
				break;
			}
			default:{
				cout<<"Opcion incorrecta"<<endl;
				break;
			}

		
		}
		system("pause");
	}while(opc != 0);
}
