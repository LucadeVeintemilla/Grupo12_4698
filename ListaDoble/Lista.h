
#include <iostream>
#include <stdio.h>  
#include <stdlib.h>  
#include <sstream>
#include "Nodo.h"
#include "Ingreso.h"

#include <functional>
using namespace std;
class ListaDobleEnlazada{
	public:
		ListaDobleEnlazada()=default;
		void insertar(int);
		void insertar_inicio(int);
        void insertarCola(int);
        bool ListaVacia();
        void anadirMitad(int, int);
		void borrarNodo(int val);
		
		void imprimirLista();
		void buscarNodo();
		Nodo* buscar_x(int);
		void InsertarI(int);
		void eliminarCola() ;
		void eliminarCabeza();
		
	private:
		Nodo *ultimo_nodo();
		Nodo *cabeza=NULL;
		int tamanio=0;
};

void ListaDobleEnlazada::insertar(int valor){
	Nodo *nodo=new Nodo(valor);
	if(cabeza==NULL){
		this->cabeza=nodo;
		tamanio++;
		return;
	}
	Nodo *ultimo = ultimo_nodo();
	ultimo->setSiguiente(nodo);
	nodo->setAnterior(ultimo);
}

Nodo *ListaDobleEnlazada::ultimo_nodo(){
	Nodo *tmp=cabeza;
	while(tmp->getSiguiente()!=NULL){
		tmp=tmp->getSiguiente();
	}
	return tmp;
}

bool ListaDobleEnlazada::ListaVacia(){
	return (this->cabeza == NULL) ? true : false;
}

void ListaDobleEnlazada::insertarCola(int dato) {

    if (this->cabeza==NULL) {
        this->cabeza = new Nodo(dato);
    }
    else {
        Nodo *aux1;
        Nodo *aux2 = new Nodo(dato);

        aux1=ultimo_nodo();

        aux1->setSiguiente(aux2);
        aux2->setAnterior(aux1);
    }
}

void ListaDobleEnlazada::anadirMitad(int posicion,int valor) {
    Nodo *nodo=new Nodo(valor);
    if (this->cabeza==NULL) {
        this->cabeza = nodo;
    }
    else {
        Nodo *aux;
        Nodo *aux1;

        aux = this->cabeza;

        int indice = 0;
        while (aux != NULL && indice != posicion)
        {
            aux1 = aux;
            aux = aux->getSiguiente();
            indice++;
        }
        Nodo *atrasNode = aux1->getAnterior();
        atrasNode->setSiguiente(nodo);
        nodo->setSiguiente(aux1);
    }
}

void ListaDobleEnlazada::borrarNodo(int val){
	Nodo *aux_borrar;
	Nodo *anterior=NULL;
	aux_borrar=this->cabeza;
	while((aux_borrar!=NULL)&&(aux_borrar->getValor()!=val)){
		anterior=aux_borrar;
		aux_borrar=aux_borrar->getSiguiente();
	}
	if(aux_borrar==NULL){
		cout<<"Elemento inexistente"<<endl;
	}
	else if(anterior==NULL){
		this->cabeza=this->cabeza->getSiguiente();
		delete aux_borrar;
	}else{
		anterior->setSiguiente(aux_borrar->getSiguiente());
		delete aux_borrar;
	}
}



Nodo *ListaDobleEnlazada::buscar_x(int dato){
    int cont=0;
    
        Nodo* e = this->cabeza;
        if(e->getValor() == dato){
            cout<<"Posicion en la lista: "<<cont+1<<", dato: "<<e->getValor()<<endl;
            return e;
        }

        do{
            e = e->getSiguiente();
            cont++;
        }while((e!= NULL)&&(e->getValor()!= dato));

        if(e == NULL){
            cout<<"No se ha encontrado el dato"<<endl;
            return NULL;
        }
        else{
            cout<<"Posicion en la lista: "<<cont+1<<", dato: "<<e->getValor()<<endl;
            return e;
        }
    
}

void ListaDobleEnlazada::imprimirLista(){
	Nodo *tmp=cabeza;
	int indice=0;
	while(tmp!=NULL){
		std::cout<<"-"<<indice<<"  valor "<<tmp->getValor()<<std::endl;
		indice++;
		tmp=tmp->getSiguiente();
	}
}	
void ListaDobleEnlazada::InsertarI(int x)
{   if(!cabeza)	{
	cabeza=new Nodo(x);}
	else
	{	Nodo *tmp=new Nodo(x);
   		tmp->setSiguiente(cabeza);
   		cabeza->setAnterior(tmp);
		cabeza=tmp;  		
   	}
}
void ListaDobleEnlazada::eliminarCola() {
 if(this->cabeza!=NULL) {
        if(this->cabeza->getSiguiente() == NULL) {
          this->cabeza = NULL;
        } else {
          Nodo* temp = this->cabeza;
          while(temp->getSiguiente()->getSiguiente() != NULL)
            temp = temp->getSiguiente();
          Nodo* lastNode = temp->getSiguiente();
          temp->setSiguiente(NULL);
          free(lastNode); 
        }
      }
}	
void ListaDobleEnlazada::eliminarCabeza() {
if(this->cabeza != NULL) {
    
    Nodo* temp = this->cabeza;

    this->cabeza= this->cabeza->getSiguiente();
    

    free(temp); 

    if(this->cabeza != NULL)
      this->cabeza->setAnterior(NULL);
  }
}

