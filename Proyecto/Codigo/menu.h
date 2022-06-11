#include<stdlib.h>
#include"Lista.h"
#include "Persona.h"
#include "Tools.h"
#pragma once


using namespace std;
class Menu {
public:
	Menu();
	int mostrar_menu();
	int opciones_menu();
private:
	string dim;
	Ingreso ingreso;
	Validacion validar;
};
Menu::Menu() {
}
int Menu::opciones_menu() {
	int opc;
	bool gameover = false;
	char puntero = '->';
	int coord_y = 0;


	cout << "\t--Opciones de compra--" << endl;
	//Gotoxy(coord_x,coord_y);
	printf("\t");
	cout << "[1]. Hacer pedido de compra" << endl;//Insertar inicio
	printf("\t");
	cout << "[2]. Comprar desde la lista de ventas" << endl;//(eliminar desde la lista de ventas)
	printf("\t");
	cout << "[3]. Eliminar una compra" << endl;
	printf("\t");
	cout << "[4]. Imprimir la lista" << endl;
	printf("\t");
	cout << "[5]. Exportar datos de compra .txt + PDF" << endl;
	cout << "------------------------------------------------" << endl;
	cout << "\t--Opciones de venta--" << endl;
	printf("\t");
	cout << "[6]. Insertar un celular en la lista de venta" << endl;
	printf("\t");
	cout << "[7]. Vender una unidad existente" << endl;
	printf("\t");
	cout << "[8]. Eliminar de la lista de venta" << endl;
	printf("\t");
	cout << "[9]. Imprimir la lista de venta" << endl;
	printf("\t");
	cout << "[10]. Exportar datos de venta .txt + PDF" << endl;
	printf("\t");
	cout << "[11]. Crear Marquesina" << endl;
	printf("\t");

	cout << "[12]. Salir" << endl;

	while (!gameover)
	{

		Gotoxy(7, coord_y);

		cout << " ";

		if (coord_y <= 0)
		{
			coord_y++;
		}
		if (coord_y >= 15)
		{
			coord_y--;
		}

		if (_kbhit())
		{
			switch (_getch())
			{
			case 72: //arriba
				coord_y--;
				break;

			case 80: //abajo
				coord_y++;
				break;

			case 13: //enter
				opc = coord_y;
				cout << opc << endl;
				gameover = true;
				break;
			}
		}


		Gotoxy(7, coord_y);
		cout << puntero;
		cout << "";
	}

	return opc;
}
int Menu::mostrar_menu() {
	bool mouse = true;
	int opcion = 0;
	int opc, tam;
	Lista<Persona>* lista_compra = new Lista<Persona>();
	Lista<Persona>* lista_venta = new Lista<Persona>();
	Lista<Persona>* lista = new Lista<Persona>();
	int salida = 0;

	do {
		system("cls");

		/*
		int coord;
		coord = place();
		Sleep(1000);
		*/

		opc = opciones_menu();
		switch (opc)
		{
		case 1: {
			system("cls");

			char nombre[100];
			char celular[100];
			char modelo[100];
			char color[100];
			float precio;


			//cout<<"Ingrese el nombre"<<endl;
			strcpy(nombre, validar.ingresoString("Ingrese su nombre \n"));
			cout << endl;
			//memcpy(_nombre, *nombre, 50);

			strcpy(celular, validar.ingresoString("Ingrese la Marca del celular que desea\n"));
			cout << endl;
			
			cout << "Ingrese el modelo" << endl;
			cin >> (modelo);
			//cout<<"Ingrese el color"<<endl;
			//gets(color);
			strcpy(color, validar.ingresoString("Ingrese el color \n"));
			cout << endl;
			cout << "Ingrese precio" << endl;
			precio = validar.convertirFlotante();

			Persona* temp = new Persona(nombre, celular, modelo, color, precio);
			//dim = ingreso.leer("\t--Insertar un nodo al final--\nIngrese un dato:", 1);
			//istringstream(dim)>>dato;
			cout << "\t--Insertar un celular al final:" << endl;
			lista_compra->insertarUltimo(*temp);
			lista_compra->imprimir();
			fflush(stdin);
			break;
		}

		case 2: {//eliminar desde la lista de ventas
			system("cls");
			int dato;
			lista_venta->imprimir();
			cout << "Eliminar" << endl;
			if (lista_venta->vacia() == false) {
				dim = ingreso.leer("\nElija el celular que desea comprar: ", 1);
				istringstream(dim) >> dato;
				Persona temp = lista_venta->copiar(dato);
				lista_compra->insertarUltimo(temp);
			}
			else {
				cout << "La lista esta vacia" << endl;
			}
			fflush(stdin);
			//lista_venta->imprimir();
			break;
		}

		case 3: {//Eliminar el nodo X de la LISTA DE COMPRA
			system("cls");
			int dato;
			lista_compra->imprimir();
			cout << "Eliminar" << endl;

			if (!lista_compra->vacia()) {
				dim = ingreso.leer("\nElija el celular que desea eliminar: ", 1);
				istringstream(dim) >> dato;
				lista_compra->borrar(dato);
				lista_compra->imprimir();
			}
			else {
				cout << "No hay articulos que eliminar" << endl;
			}
			fflush(stdin);

			break;
		}


		case 4: {//Imprimir lista LA LISTA DE COMPRA
			system("cls");
			lista_compra->imprimir();
			fflush(stdin);
			break;
		}

		case 5: {//Exportar lista LA LISTA DE COMPRA .txt
			system("cls");
			string nombre = "ListaCompra";
			lista_compra->exportartxt(nombre);
			fflush(stdin);
			break;
		}


			  /*---------------------------------------------------*/

		case 8: {//Insertar nodo al final de la lista de venta  crear venta
			system("cls");
			char nombre[100];
			char celular[100];
			char modelo[100];
			char color[100];
			float precio;

			//cout<<"Ingrese el nombre"<<endl;
			//gets(nombre);

			strcpy(nombre, validar.ingresoString("Ingrese su nombre\n"));
			cout << endl;

			strcpy(celular, validar.ingresoString("Ingrese la Marca del celular que desea\n"));
			cout << endl;

			cout << "Ingrese el modelo" << endl;
			cin >> (modelo);

			//cout<<"Ingrese el color"<<endl;
			//gets(color);

			strcpy(color, validar.ingresoString("Ingrese el color \n"));
			cout << endl;

			cout << "Ingrese precio" << endl;
			precio = validar.convertirFlotante();

			Persona* temp = new Persona(nombre, celular, modelo, color, precio);
			//dim = ingreso.leer("\t--Insertar un nodo al final--\nIngrese un dato:", 1);
			//istringstream(dim)>>dato;
			cout << "\t--Insertar un celular al final:" << endl;
			lista_venta->insertarUltimo(*temp);
			lista_venta->imprimir();
			fflush(stdin);
			break;
		}

		case 9: {//Eliminar el nodo X de la LISTA DE COMPRA
			system("cls");
			int dato;
			lista_compra->imprimir();
			cout << "Eliminar" << endl;

			if (lista_venta->vacia() == false) {
				dim = ingreso.leer("\nElija el celular que desea vender: ", 1);
				istringstream(dim) >> dato;
				Persona temp = lista_compra->copiar(dato);
				lista_venta->insertarUltimo(temp);
			}
			else {
				cout << "No hay articulos a la venta" << endl;
			}
			//lista_venta->imprimir();
			fflush(stdin);
			break;
		}

		case 10: {//Eliminar lista LA LISTA DE VENTA

			system("cls");
			int dato;
			lista_venta->imprimir();
			cout << "Eliminar" << endl;

			if (!lista_venta->vacia()) {
				dim = ingreso.leer("\nElija el celular que desea eliminar: ", 1);
				istringstream(dim) >> dato;
				lista_venta->borrar(dato);
			}
			else {
				cout << "\n\t--La lista esta vacia-" << endl;
			}

			lista_venta->imprimir();
			fflush(stdin);
			break;

		}

		case 11: {//Imprimir lista LA LISTA DE VENTA

			system("cls");
			lista_venta->imprimir();
			fflush(stdin);
			break;

		}

		case 12: {//exportar LA LISTA DE VENTA

			system("cls");
			string nombre = "ListaVentas";
			lista_venta->exportardat(nombre);
			fflush(stdin);

			break;

		}

		case 13: {//
			system("cls");
			lista->marquesina();
			break;
		}

		case 14: {//
			system("cls");
			cout << "--Gracias por usar mi programa--" << endl;
			mouse = false;
			fflush(stdin);
			salida++;
			break;

		}
		default: {
			cout << "Opcion incorrecta" << endl;
			break;
		}

		}
		system("pause");
	} while (opc != 14);

	return salida;

}
