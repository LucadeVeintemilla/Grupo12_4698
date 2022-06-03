#include<stdlib.h>
#include"Lista.h"
using namespace std;
class Menu{
	public:
		Menu();
		void mostrar_menu();
		int opciones_menu();
		ListaDobleEnlazada lst;
    private:
        string dim;
        Ingreso ingreso;
        Validacion validar;
};
Menu::Menu(){
}
int Menu::opciones_menu(){
	
		ListaDobleEnlazada lst;
	int opc;
	cout<<"\t--------------------------"<<endl;
	cout<<"\t--------Lista Doble-------"<<endl;
	cout<<"\t--------------------------"<<endl;
	cout<<"1->Insertar nodos"<<endl;
	cout<<"2->Insertar un nodo por cabeza"<<endl;
	cout<<"3->Insertar un nodo por cola"<<endl;
	cout<<"4->Insertar un nodo por posicion"<<endl;
	cout<<"5->Borrar un nodo X"<<endl;
	cout<<"6->Borrar cola"<<endl;
	cout<<"7->Borrar cabeza"<<endl;
	cout<<"8->Consultar Posicion"<<endl;
	cout<<"9->Imprimir"<<endl;
	cout<<"0->Salir"<<endl;
	dim = ingreso.leer("Seleccione una opcion: ", 1);
	istringstream(dim)>>opc;
	return opc;
}
void Menu::mostrar_menu(){
	
		ListaDobleEnlazada lst;
	int opc;
	
	do{
		system("cls");
		opc = this->opciones_menu();
		switch(opc)
		{
			
			case 1:{//Insertar un nodo al inicio
				cout<<"\n\t--Insertar nodos.--"<<endl;
				int dato,dato1;
				printf("Ingrese la cantidad de numeros que va ingresar-> ");
				
				
			    dato = validar.convertirEntero();
				cout<<endl;
				for(int i=0;i<dato;i++){
					printf("Numero %d-> ",i+1);
					dato1 = validar.convertirEntero();
					cout<<endl;
					lst.insertar(dato1);
					
				}
				break;
			}
			case 2:{//Insertar un nodo al inicio
				cout<<"\n\t--Insertar nodo al inicio.--"<<endl;
				int dato;
				cout<<"Ingrese el numero que va insertar por la cabeza"<<endl;
				dato = validar.convertirEntero();
				cout<<endl;
			    lst.InsertarI(dato);
			    lst.imprimirLista();
				break;
			}

			case 3:{//Insertar nodo al final
			    system("cls");
			    cout<<"\n\t--Insertar por cola.--"<<endl;
			    int dato;
			    cout<<("Ingrese el numero que va insertar en la cola de la lista-> ")<<endl;
					dato = validar.convertirEntero();
					cout<<endl;
					lst.insertarCola(dato);
					lst.imprimirLista();
				break;
			}
			
			case 4:{//Insertar nodo a la mitad
			    system("cls");
			    cout<<"\n\t--Insertar por posicion.--"<<endl;
			    int dato,dato1;
			    lst.imprimirLista();
			    cout<<("Ingrese la posicion-> ")<<endl;
			    dato = validar.convertirEntero();
				
				cout<<("Ingrese el numero-> ")<<endl;
				dato1 = validar.convertirEntero();
				lst.anadirMitad(dato,dato1);
				cout<<endl;
				lst.imprimirLista();
			    break;
			    
			}


			case 5:{//Eliminar el nodo X
			    system("cls");
			    cout<<"\n\t--Eliminar por posicion.--"<<endl;
			    int dato;
			    lst.imprimirLista();
			    cout<<("Ingrese el elemento a borrar-> ")<<endl;
			    
				dato = validar.convertirEntero();
				lst.borrarNodo(dato);
				cout<<endl;
				lst.imprimirLista();
				break;
			}
			
			case 6:{//Borrar cola
			    system("cls");
			    cout<<"\n\t--Eliminar por cola.--"<<endl;
			    lst.imprimirLista();
			    lst.eliminarCola();
			    cout<<"Despues de eliminar por cola"<<endl;
			    lst.imprimirLista();
				break;
			}
			
			case 7:{//Borrar Cabeza
			    system("cls");
			    cout<<"\n\t--Eliminar por cabeza.--"<<endl;
			    lst.imprimirLista();
			    lst.eliminarCabeza();
			    cout<<"Despues de eliminar por cabeza"<<endl;
			    lst.imprimirLista();
				break;
			}

			case 8:{//Consultar Posicion
			    system("cls");
			    lst.imprimirLista();
			    int dato;
			    cout<<"\n\t--Buscar un Nodo X de la lista.--"<<endl;
			    dato = validar.convertirEntero();
				cout<<endl;
			    lst.buscar_x(dato);
				break;
			}

			case 9:{//Imprimir lista
			    system("cls");
				lst.imprimirLista();
				break;
			}

			

			case 0:{//Salir del programa
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
