#include <iostream>
#include <sstream>
#include "Nodo.h"
#include "Ingreso.h"
using namespace std;

class ListaSimple
{
    public:
    virtual int tamanio_lista() = 0;
    virtual void insertar_inicio(int) = 0;
    virtual void insertar_final(int) = 0;
    virtual void imprimir_lista() = 0;
    virtual void imprimir_lista_cola() = 0;
    virtual bool vacio() = 0;
    virtual void eliminar_primer() = 0;
    virtual void eliminar_ultimo() = 0;
    virtual void eliminar_x(int) = 0;
    virtual Nodo* buscar_x(int) = 0;
    virtual Nodo* buscar(int) = 0;
};


class Lista: public ListaSimple{
	private:
		Nodo *pri;
		Nodo *ult;
	public:
		Lista();
		int tamanio_lista();
		void insertar_inicio(int);
		void insertar_final(int);
		void imprimir_lista();
		void imprimir_lista_cola();
		bool vacio();
		void eliminar_primer();
		void eliminar_ultimo();
		void eliminar_x(int);
		Nodo* buscar_x(int);
		Nodo* buscar(int);
	protected:
	    int verifica(int);
};

int Lista::tamanio_lista(){
    int cont = 0;
    if(!vacio())
    {
        Nodo* e = this->pri;
        do{
            cont++;
            e = e->get_sig();
        }while(e!= NULL);
        return cont;
    }
    else{
        cout<<"Lista vacia"<<endl;
        return 0;
    }
}

Lista::Lista(){
	this->pri = NULL;
	this->ult = NULL;
}
bool Lista::vacio(){
	return ((this->pri == NULL)&&(this->ult == NULL)) ? true : false;
}
void Lista::insertar_final(int dato){
	Nodo* e = new Nodo(dato,NULL);
	if(!vacio())//Si la lista no esta vacia
	{
		cout<<"Lista no vacia, se agrega nodo al final"<<endl;
		this->ult->set_sig(e); //Hago que el ultimo nodo de la lista apunte al nuevo nodo
		this->ult = e; // Hago que el puntero ult de la cabercera apunte al nuevo
	}
	else
	{
		cout<<"Lista vacia, se agrega primer elemento"<<endl;
		this->pri = e;
		this->ult = e;
	}
}

void Lista::insertar_inicio(int dato){
	Nodo* e = new Nodo(dato,NULL);
	if(!vacio())//Si la lista no esta vacia
	{
		cout<<"Lista no vacia, se agrega nodo al inicio"<<endl;
		e->set_sig(this->pri);
		this->pri = e;
	}
	else
	{
		cout<<"Lista vacia, se agrega primer elemento"<<endl;
		this->pri = e;
		this->ult = e;
	}
}
void Lista::imprimir_lista()
{
	int i=0;
	if(!vacio())
	{
		cout<<"\t--Lista completa--\n";
		Nodo *e = this->pri;
		do{
			i++;
			cout<<"Dato "<<i<<": "<<e->get_dato()<<endl;
			e = e->get_sig();// para moverme por la lista
		}while(e != NULL);
	}
	else
	{
		cout<<"No contiene datos"<<endl;
	}
}

/////////////////////////////////////////////////////////////////////////////////
void Lista::imprimir_lista_cola()
{
    int tamanio = tamanio_lista()-1;
	int i=0;
	cout<<"\t--Lista completa--\n";
	while(tamanio > 0){
        Nodo *e = this->pri;
        for(int j=0; j < tamanio; j++){
            e = e->get_sig();
        }
        cout<<"Dato: "<<e->get_dato()<<endl;
        tamanio -= 1;
	}

	Nodo *raiz = this->pri;
    cout<<"Dato: "<<raiz->get_dato()<<endl;
}

int Lista::verifica(int nu)
{
    int x=0;
    Nodo* e = this->pri;
        do{
            if(nu == e->get_dato()){
                x++;
            }
            e = e->get_sig();
        }while(e!= NULL);
    return x;
}

Nodo *Lista::buscar_x(int dato){
    int cont=0;
    if(!vacio()){
        Nodo* e = this->pri;
        if(e->get_dato() == dato){
            cout<<"Posicion en la lista: "<<cont+1<<", dato: "<<e->get_dato()<<endl;
            return e;
        }

        do{
            e = e->get_sig();
            cont++;
        }while((e!= NULL)&&(e->get_dato()!= dato));

        if(e == NULL){
            cout<<"No se a encontrado el dato"<<endl;
            return NULL;
        }
        else{
            cout<<"Posicion en la lista: "<<cont+1<<", dato: "<<e->get_dato()<<endl;
            return e;
        }
    }
    else{
        cout<<"Lista vacia"<<endl;
        return NULL;
    }
}
void Lista::eliminar_x(int dato){
    string dim;
    Ingreso ingreso;
    int opc=0,i;
    if(!vacio()){
		Nodo* e = this->pri;
		Nodo* anterior = this->pri;
        while((e!= NULL)&&(e->get_dato()!= dato)){
            i++;
            anterior = e;
            e = e->get_sig();
        }
        if(e == NULL){
            cout<<"El elemento no existe o hubo un error"<<endl;
        }
        else{
            if(i == 0){
            eliminar_primer();
            }
            else if(i == tamanio_lista()){
                eliminar_ultimo();
            }
            else{
                cout<<"Se eliminara el dato -> "<<e->get_dato();
                dim = ingreso.leer(" desea continuar? op 1 = si, op 2 = no: ", 1);
                istringstream(dim)>>opc;
                if(opc == 1){
                anterior->set_sig(e->get_sig());
                delete e;
                }
                else{
                        cout<<"No se ha eliminado ningun dato"<<endl;
                }
            }

        }
	}
	else{
		cout<<"Lista vacia"<<endl;
	}
}
void Lista::eliminar_ultimo(){
    string dim;
    Ingreso ingreso;
	int opc=0;
	if(!vacio()){
		Nodo* e = this->pri;
		Nodo* penultimo = this->pri;
        while(e->get_sig()!= NULL){
            penultimo = e;
            e = e->get_sig();
        }
        cout<<"Se eliminara el dato -> "<<e->get_dato();
        dim = ingreso.leer(" desea continuar? op 1 = si, op 2 = no: ", 1);
        istringstream(dim)>>opc;
		if(opc == 1){
            penultimo->set_sig(NULL);
            delete e;
            cout<<"Dato eliminado correctamente"<<endl;
		}
		else{
            cout<<"No se ha eliminado ningun dato"<<endl;
		}
	}
	else{
		cout<<"Lista vacia"<<endl;
	}
}

void Lista::eliminar_primer(){
    string dim;
    Ingreso ingreso;
	int opc;
	if(!vacio()){
		Nodo* e = this->pri;
		cout<<"Se eliminara el dato -> "<<e->get_dato();
		dim = ingreso.leer(" desea continuar? op 1 = si, op 2 = no: ", 1);
        istringstream(dim)>>opc;
		if(opc == 1){
			this->pri = e->get_sig();
			delete e;
			cout<<"Dato eliminado correctamente"<<endl;
		}
		else{
			cout<<"No se a eliminado ningun dato"<<endl;
		}
	}
	else{
		cout<<"Lista vacia"<<endl;
	}
}

Nodo* Lista::buscar(int buscar){
    Nodo *e = NULL;
    if(!vacio()){
        //e->set_sig(this->pri);
        e = this->pri;
        while(e!=NULL  && e->get_dato()!=buscar){
			e = e->get_sig();
        }
    }else{
        cout<<"La lista esta vacia"<<endl;
    }
    //cout<<"Dato encontrado:  "<<e->get_dato()<<endl;
    return e;
}


