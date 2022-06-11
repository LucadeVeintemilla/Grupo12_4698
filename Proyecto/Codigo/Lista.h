#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include "Ingreso.h"
#include "Tools.h"
#include "Persona.h"
#include "Aspose.Cells.h"
#pragma once
using namespace std;

/*Folders to store source files and result files to demo*/
static StringPtr sourcePath = new String("sourceFile\\");
static StringPtr resultPath = new String("resultFile\\");

/*Check result*/
#define EXPECT_TRUE(condition) \
		if (condition) printf("--%s,line:%d -> Ok --\n", __FUNCTION__, __LINE__); \
			 else  printf("--%s,line:%d->>>> Failed!!!! <<<<--\n", __FUNCTION__, __LINE__);

std::string Convert(float number) {
    std::ostringstream buff;
    buff << number;
    return buff.str();
}

template<class DATO>
class Lista {
private:
    template<class DATON>
    class Nodo {
    public:
        Nodo(const DATON dat, Nodo<DATON>* sig, Nodo<DATON>* ant) : dato(dat), sig(sig), ant(ant) {}
        //int info;
        DATON dato;
        Nodo<DATON>* sig;
        //Nodo *sig;
        Nodo<DATON>* ant;
        //Nodo *ant;
    };

    //Nodo *raiz;
    Nodo<DATO>* raiz;

public:
    Lista() : raiz(NULL) {}
    ~Lista();
    void insertarPrimero(const DATO dat);
    void insertarUltimo(const DATO x);
    bool vacia();
    void imprimir();
    int cantidad();
    void borrar(int pos);
    DATO copiar(int pos);
    void exportartxt(string);
    void exportardat(string);
    void marquesina();
};



template<class DATO>
Lista<DATO>::~Lista()
{
    if (raiz != NULL) {
        Nodo<DATO>* reco = raiz->sig;
        Nodo<DATO>* bor;
        while (reco != raiz)
        {
            bor = reco;
            reco = reco->sig;
            delete bor;
        }
        delete raiz;
    }
}

template<class DATO>
void Lista<DATO>::insertarPrimero(const DATO x)
{
    Nodo<DATO>* nuevo = new Nodo<DATO>(x, NULL, NULL);
    nuevo->dato = x;
    if (raiz == NULL)
    {
        nuevo->sig = nuevo;
        nuevo->ant = nuevo;
        raiz = nuevo;
    }
    else
    {
        Nodo<DATO>* ultimo;
        ultimo = raiz->ant;
        nuevo->sig = raiz;
        nuevo->ant = ultimo;
        raiz->ant = nuevo;
        ultimo->sig = nuevo;
        raiz = nuevo;
    }
}

template<class DATO>
void Lista<DATO>::insertarUltimo(const DATO x)
{
    Nodo<DATO>* nuevo = new Nodo<DATO>(x, NULL, NULL);;
    nuevo->dato = x;
    if (raiz == NULL)
    {
        nuevo->sig = nuevo;
        nuevo->ant = nuevo;
        raiz = nuevo;
    }
    else
    {
        Nodo<DATO>* ultimo;
        ultimo = raiz->ant;
        nuevo->sig = raiz;
        nuevo->ant = ultimo;
        raiz->ant = nuevo;
        ultimo->sig = nuevo;
    }
}

template<class DATO>
bool Lista<DATO>::vacia()
{
    if (raiz == NULL)
        return true;
    else
        return false;
}

template<class DATO>
void Lista<DATO>::imprimir()
{
    if (!vacia()) {
        Nodo<DATO>* reco = raiz;
        do {
            cout << reco->dato << "-";
            reco = reco->sig;
        } while (reco != raiz);
        cout << "\n";
    }
}

template<class DATO>
int Lista<DATO>::cantidad()
{
    int cant = 0;
    if (!vacia())
    {
        Nodo<DATO>* reco = raiz;
        do {
            cant++;
            reco = reco->sig;
        } while (reco != raiz);
    }
    return cant;
}

template<class DATO>
void Lista<DATO>::borrar(int pos)
{
    if (!vacia()) {
        if (pos <= cantidad())
        {
            if (pos == 1)
            {
                if (cantidad() == 1)
                {
                    delete raiz;
                    raiz = NULL;
                }
                else
                {
                    Nodo<DATO>* bor = raiz;
                    Nodo<DATO>* ultimo = raiz->ant;
                    raiz = raiz->sig;
                    ultimo->sig = raiz;
                    raiz->ant = ultimo;
                    delete bor;
                }
            }
            else {
                Nodo<DATO>* reco = raiz;
                for (int f = 1; f <= pos - 1; f++)
                    reco = reco->sig;
                Nodo<DATO>* bor = reco;
                Nodo<DATO>* anterior = reco->ant;
                reco = reco->sig;
                anterior->sig = reco;
                reco->ant = anterior;
                delete bor;
            }
        }

    }
    else {
        cout << "La lista esta vacia" << endl;
    }
}

template<class DATO>
DATO Lista<DATO>::copiar(int pos)
{
    try {
        if (!vacia()) {
            if (pos <= cantidad())
            {
                if (pos == 1)
                {
                    if (cantidad() == 1)
                    {
                        DATO copia = raiz->dato;
                        raiz = NULL;
                        delete raiz;
                        return copia;
                    }
                    else
                    {
                        Nodo<DATO>* bor = raiz;
                        Nodo<DATO>* ultimo = raiz->ant;
                        raiz = raiz->sig;
                        ultimo->sig = raiz;
                        raiz->ant = ultimo;
                        DATO copia = bor->dato;
                        delete bor;
                        return copia;
                    }
                }
                else {
                    Nodo<DATO>* reco = raiz;
                    for (int f = 1; f <= pos - 1; f++)
                        reco = reco->sig;
                    Nodo<DATO>* bor = reco;
                    Nodo<DATO>* anterior = reco->ant;
                    reco = reco->sig;
                    anterior->sig = reco;
                    reco->ant = anterior;
                    DATO copia = bor->dato;
                    delete bor;
                    return copia;
                }
            }
        }
    }
    catch (char e) {
        cout << "La lista esta vacia" << endl;
    }

}



template<class DATO>
void Lista<DATO>::exportartxt(string nombreArchivo)
{
    int cont = 1;
    char array[10];
    string nombre = nombreArchivo + ".txt";
    fstream archivo(nombre);

    if (!archivo.is_open()) {
        archivo.open(nombre, ios::out);
    }

    /*create a new workbook*/
    intrusive_ptr<IWorkbook> wb = Factory::CreateIWorkbook();

    /*get the first worksheet*/
    intrusive_ptr<IWorksheetCollection> wsc = wb->GetIWorksheets();
    intrusive_ptr<IWorksheet> ws = wsc->GetObjectByIndex(0);

    intrusive_ptr<ICells> cells5 = ws->GetICells();
    intrusive_ptr<ICell> cell5 = cells5->GetObjectByIndex(0, 3);
    intrusive_ptr<String> str5 = new String("Lista Compra");
    cell5->PutValue(str5);

    if (!vacia()) {
        Nodo<DATO>* reco = raiz;
        do {
            archivo << reco->dato << "-";


            /*get cell(0,0)*/
            intrusive_ptr<ICells> cells = ws->GetICells();
            intrusive_ptr<ICell> cell = cells->GetObjectByIndex(cont, 0);
            intrusive_ptr<String> str = new String(reco->dato.getNombre());
            cell->PutValue(str);

            intrusive_ptr<ICells> cells1 = ws->GetICells();
            intrusive_ptr<ICell> cell1 = cells->GetObjectByIndex(cont, 1);
            intrusive_ptr<String> str1 = new String(reco->dato.getCelular());
            cell1->PutValue(str1);

            intrusive_ptr<ICells> cells2 = ws->GetICells();
            intrusive_ptr<ICell> cell2 = cells->GetObjectByIndex(cont, 2);
            intrusive_ptr<String> str2 = new String(reco->dato.getModelo());
            cell2->PutValue(str2);

            intrusive_ptr<ICells> cells3 = ws->GetICells();
            intrusive_ptr<ICell> cell3 = cells->GetObjectByIndex(cont, 3);
            intrusive_ptr<String> str3 = new String(reco->dato.getColor());
            cell3->PutValue(str3);

            intrusive_ptr<ICells> cells4 = ws->GetICells();
            intrusive_ptr<ICell> cell4 = cells->GetObjectByIndex(cont, 4);
            snprintf(array, sizeof(array), "%f", reco->dato.getPrecio());
            intrusive_ptr<String> str4 = new String(array);
            cell4->PutValue(str4);

            /*save this workbook to resultFile folder*/

            cont++;
            reco = reco->sig;
        } while (reco != raiz);
        archivo << endl;
    }

    wb->Save(resultPath->StringAppend(new String("ListadoC.pdf")));

    cout << "Exportado con exito" << endl;

    archivo.close();
}

template<class DATO>
void Lista<DATO>::exportardat(string nombreArchivo)
{
    string nombre = nombreArchivo + ".dat";
    fstream archivo(nombre);
    int cont = 1;
    char array[10];

    if (!archivo.is_open()) {
        archivo.open(nombre, ios::out);
    }

    /*create a new workbook*/
    intrusive_ptr<IWorkbook> wb = Factory::CreateIWorkbook();

    /*get the first worksheet*/
    intrusive_ptr<IWorksheetCollection> wsc = wb->GetIWorksheets();
    intrusive_ptr<IWorksheet> ws = wsc->GetObjectByIndex(0);


    intrusive_ptr<ICells> cells6 = ws->GetICells();
    intrusive_ptr<ICell> cell6 = cells6->GetObjectByIndex(0, 3);
    intrusive_ptr<String> str6= new String("Lista Venta");
    cell6->PutValue(str6);


    if (!vacia()) {
        Nodo<DATO>* reco = raiz;

        do {
            archivo << reco->dato << "-";
            /*get cell(0,0)*/
            intrusive_ptr<ICells> cells = ws->GetICells();
            intrusive_ptr<ICell> cell = cells->GetObjectByIndex(cont, 0);
            intrusive_ptr<String> str = new String(reco->dato.getNombre());
            cell->PutValue(str);

            intrusive_ptr<ICells> cells1 = ws->GetICells();
            intrusive_ptr<ICell> cell1 = cells->GetObjectByIndex(cont, 1);
            intrusive_ptr<String> str1 = new String(reco->dato.getCelular());
            cell1->PutValue(str1);

            intrusive_ptr<ICells> cells2 = ws->GetICells();
            intrusive_ptr<ICell> cell2 = cells->GetObjectByIndex(cont, 2);
            intrusive_ptr<String> str2 = new String(reco->dato.getModelo());
            cell2->PutValue(str2);

            intrusive_ptr<ICells> cells3 = ws->GetICells();
            intrusive_ptr<ICell> cell3 = cells->GetObjectByIndex(cont, 3);
            intrusive_ptr<String> str3 = new String(reco->dato.getColor());
            cell3->PutValue(str3);

            intrusive_ptr<ICells> cells4 = ws->GetICells();
            intrusive_ptr<ICell> cell4 = cells->GetObjectByIndex(cont, 4);
            snprintf(array, sizeof(array), "%f", reco->dato.getPrecio());
            intrusive_ptr<String> str4 = new String(array);
            cell4->PutValue(str4);

            /*save this workbook to resultFile folder*/

            cont++;
            reco = reco->sig;
        } while (reco != raiz);
        archivo << endl;
    }

    wb->Save(resultPath->StringAppend(new String("ListadoV.pdf")));

    cout << "Exportado con exito" << endl;

    archivo.close();
}

template<class DATO>
void Lista<DATO>::marquesina()
{
    int a = 1, b, c = 0;
    char nombre[50];
    cout << "Ingrese caracteres para crear la marquesina (MAXIMO 25 Caracteres)";
    Gotoxy(1, 1);


    do
    {
        c++;
        nombre[c] = _getche();
    } while (nombre[c] != 13);


    while (!_kbhit())
    {
        cout << "PRESIONE CUALQUIER TECLA PARA SALIR DEL EFECTO" << endl;
        for (b = 1; b <= c; b++)
        {

            if (a + b >= 110) {
                cout << "" << endl;
                Gotoxy(a + (b - 109), 1);
            }

            else {
                cout << "" << endl;
                Gotoxy(a + b, 1);
            }

            cout << nombre[b];

        }

        Sleep(50);
        Gotoxy(1, 1);
        system("cls");
        a++;

        if (a == 110) { a = 1; }
    }

}