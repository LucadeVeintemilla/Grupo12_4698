#include <iostream>
#include <stdlib.h>
#include "Pila.cpp"
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
	
		int cant,i=0,v,op=1;
    	Nodo *pila=NULL;	
	int opc;
	
	do{
		system("cls");
		opc = this->opciones_menu();
		switch(opc)
		{
			
			case 1:{
				system("cls");
						cout<<"Cuantos datos va a ingreasar"<<endl;
		        
				cant = validar.convertirEntero();
		        while(i<cant)
		        {
		        	 cout<<endl;
		            cout<<"Valor["<<i<<"]: "<<endl;
		            
		            v = validar.convertirEntero();
		            insertarPila(pila,v);
		            i++;
		        }
				break;
			}
			case 2:{
				system("cls");
				
				mostrarPila(pila);
				break;
			}

			case 3:{
			    system("cls");
							    if(pila==NULL)
				        {
				            cout<<"Pila vacía"<<endl;
				
				        }
				        else
				        {   cout<<"Se elimina";
				
				            while(pila!=NULL)
				            {
				               eliminarPila(pila,v);
				                if(pila!=NULL)
				                {
				                    cout<<v<<"|"<<endl;
				                }
				                else
				                {
				                    cout<<"*"<<endl;
				                }
				            }
				        }
				break;
			}
			
			case 4:{
			    system("cls");
			    cout<<"Suma: "<<endl;
			    sumaImpar(pila,0);
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