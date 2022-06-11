#ifndef LOGIN_H_INCLUDED
#define LOGIN_H_INCLUDED

#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define USER2 "admin"
#define PASS2 "admin"
#define USER  ""
#define PASS ""
#define ENTER 13
#define BACKSPACE 8

#include "Ingreso.h"
#include "Validacion.h"
#include "Menu.h"
#pragma once

using namespace std;

struct usuario
{
    string cedula;
    string apellido;
    string nombre_usuario;
    string nombre;
    string contrasena;
}persona[30];


int crear_usuario();
void superadmin();
void login();
void usuarionormal();
//
int contador(string cedula_);
bool comprobacion(string cedula_);



//void superadmin() {
//    int user = 0;
//    int op;
//    system("cls");
//    crear_usuario();
//    fflush(stdin);
//    system("cls");
//    //login();
//}


void usuarionormal()
{
    int cont = 0;

    if (cont == 0) {
        Menu menu;
        cont = menu.mostrar_menu();
        //cont++;
    }
    else {
        login();
    }
}


void login()
{
    system("cls");
    string usuario, password;

    int contador = 0;
    bool ingresa = false;

    do {
        system("cls");
        cout << "\t\t\tLOGIN DE USUARIO" << endl;
        cout << "\t\t\t----------------" << endl;
        cout << "\n\tUsuario: ";
        _getch();
        getline(cin, usuario);

        char caracter;

        cout << "\tPassword: ";
        caracter = _getch();

        password = "";

        while (caracter != ENTER) {

            if (caracter != BACKSPACE) {
                password.push_back(caracter);
                cout << "*";
            }
            else {
                if (password.length() > 0) {
                    cout << "\b \b";
                    password = password.substr(0, password.length() - 1);
                }
            }

            caracter = _getch();
        }


        if (usuario == USER && password == PASS) {
            ingresa = true;
            fflush(stdin);
            crear_usuario();
            break;
        }
        else {
            ingresa = false;
        }

        if ((usuario == USER2 && password == PASS2)) {
            fflush(stdin);
            usuarionormal();
        }
        else {
            ingresa = false;
        }


        for (int i = 0; i <= 30; i++) {
            if ((persona[i].nombre_usuario == usuario && persona[i].contrasena == password))
            {
                fflush(stdin);
                usuarionormal();
            }
            else {
                ingresa = false;
            }
        }
    } while (ingresa == false && contador < 3);

    if (ingresa == false) {
        cout << "\n\tUsted no pudo ingresar al sistema. ADIOS" << endl;
    }

    cin.get();
}



int crear_usuario()
{
    system("cls");
    int i = 0;
    int j = 0;
    char prueba[30];
    bool band = false;
    Validacion validar;
    string respuesta;

    cout << "*****REGISTRO DE USUARIOS*****" << endl;
    char nombre[100];
    strcpy(nombre, validar.ingresoString("Ingrese el nombre \n"));
    string str(nombre);
    persona[i].nombre = nombre;
    //cin>>persona[i].nombre;
    cout << endl;

    cout << "Ingrese su nombre de usuario" << endl;
    cin >> persona[i].nombre_usuario;
    cout << "Ingrese la contrasena" << endl;

    do {
        cin >> persona[i].contrasena;
        strcpy(prueba, persona[i].contrasena.c_str());
        if (prueba[i] == '1' || prueba[i] == '0' || prueba[i] == '2' || prueba[i] == '3' || prueba[i] == '4' || prueba[i] == '5' || prueba[i] == '6' || prueba[i] == '7' || prueba[i] == '8' || prueba[i] == '9')
        {
            band = true;
            break;
        }
        else {
            cout << "Ingreso no valido" << endl;

        }
    } while (band == true);
    
    char cedula[100];
    bool comprobar = true;
    do {
        strcpy(cedula, validar.ingresoEntero("Ingrese la cedula \n"));
        persona[i].cedula = cedula;
        string copiadecedula = cedula;

        int numerodeletras;
        numerodeletras = copiadecedula.size();

        if (numerodeletras > 10) {
            comprobar = true;
            cout << "Ingreso no valido mas de 10 - Pruebe otra vez\n" << endl;
        }
        else if (numerodeletras < 10) {
            comprobar = true;
            cout << "\nIngreso no valido menos de 10 - Pruebe otra vez\n" << endl;
        }
        else if (numerodeletras == 10) {
            comprobar = false;
        }

    } while (comprobar == true);
    
    i++;


    _getch;
    system("cls");
    login();
}



#endif // LOGIN_H_INCLUDED
