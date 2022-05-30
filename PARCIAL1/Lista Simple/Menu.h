#include<stdlib.h>
#include"Lista.h"
using namespace std;
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
	int opc;
	cout<<"\t--LISTA SIMPLE--"<<endl;
	cout<<"1. Insertar un nodo al inicio"<<endl;
	cout<<"2. Insertar un nodo al final"<<endl;
	cout<<"3. Eliminar el nodo X"<<endl;
	cout<<"4. Buscar un nodo X"<<endl;
	cout<<"5. Imprimir la lista"<<endl;
	cout<<"6. Imprimir la lista por cola"<<endl;
	cout<<"0. Salir"<<endl;
	dim = ingreso.leer("Seleccione una opcion: ", 1);
	istringstream(dim)>>opc;
	return opc;
}
void Menu::mostrar_menu(){
	int opc,tam = 0, i, j;
	Lista *lista = new Lista();
	do{
		system("cls");
		opc = this->opciones_menu();
		switch(opc)
		{
			case 1:{//Insertar un nodo al inicio
				system ("cls");
				int dato;
				dato = validar.convertirEntero();
				cout<<endl;
				lista->insertar_inicio(dato);
				lista->imprimir_lista();
				break;
			}

			case 2:{//Insertar nodo al final
			    system("cls");
			    int dato;
			    dato = validar.convertirEntero();
				cout<<endl;
				lista->insertar_final(dato);
				lista->imprimir_lista();
				break;
			}


			case 3:{//Eliminar el nodo X
			    system("cls");
			    int dato;
			    lista->imprimir_lista();
			    cout<<"\n\t--Eliminar el nodo X--"<<endl;
			    dato = validar.convertirEntero();
				cout<<endl;
			    lista->eliminar_x(dato);
			    lista->imprimir_lista();
				break;
			}

			case 4:{//Buscar un nodo X donde X se busca dentro de la lista
			    system("cls");
			    int dato;
			    lista->imprimir_lista();
			    cout<<"\n\t--Buscar un Nodo X de la lista.--"<<endl;
			    dato = validar.convertirEntero();
				cout<<endl;
				lista->buscar_x(dato);
				break;
			}

			case 5:{//Imprimir lista
			    system("cls");
				lista->imprimir_lista();
				break;
			}

			case 6:{//Imprimir lista por cola
			    system("cls");
				lista->imprimir_lista_cola();
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
