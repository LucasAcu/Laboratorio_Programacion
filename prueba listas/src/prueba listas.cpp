//============================================================================
// Name        : prueba.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct nodo{
	int dato;
	nodo * siguiente;
} *primero, *ultimo;

void insertar();
void imprimir();
void buscar(int dato);
void modificar(int nuevov, int aeliminar);
void eliminar(int aeliminar);

int main(){
	insertar();
	insertar();
	imprimir();
	buscar(30);
	modificar(1000,30);
	eliminar(25);

	return 0;
}



void insertar(){
	nodo * nuevo = new nodo();
	cout<<"ingrese el nuevo dato: ";
	cin>>nuevo->dato;

	if(primero==NULL){
		primero =nuevo;
		primero->siguiente=NULL;
		ultimo = nuevo;
	}else{
		ultimo->siguiente=nuevo;
		nuevo->siguiente=NULL;
		ultimo = nuevo;
	}
	cout<<"Registro guardado:"<<endl;

}

void imprimir(){
	cout<<"Imprimir la lista"<<endl;
	nodo * actual = new nodo();
	actual = primero;
	if(primero != NULL){
		while(actual!= NULL){
			cout<<" "<<actual->dato;
			actual=actual->siguiente;
		}
	}else{
		cout<<"lista vacia";
	}
}
void buscar(int dat){
	int cont=0;
	int pos=0;
	bool flag;

	cout<<"Buscando"<<dat<<"..."<<endl;
	nodo * actual = new nodo();
	actual = primero;
	if(primero != NULL){
		while(actual!= NULL){
			cont++;
			if(actual->dato==dat){
				flag=true;
				pos=cont;
				actual=actual->siguiente;
			}
			else{
				actual=actual->siguiente;
			}
		}
		if(flag){
			cout<<"encontrando la pos"<<pos<<endl;
		}else{
			cout<<"no encontrado"<<endl;
		}
	}else{
		cout<<"lista vacia";
	}
}

void modificar(int nuevov, int aeliminar){
	int cont=0;
		int pos=0;
		bool flag;

		cout<<"Modificando"<<aeliminar<<"por"<<nuevov<<endl;
		nodo * actual = new nodo();
		actual = primero;
		if(primero != NULL){
			while(actual!= NULL){
				cont++;
				if(actual->dato==aeliminar){
					actual->dato=nuevov;
					flag=true;
					pos=cont;
					actual=actual->siguiente;
				}
				else{
					actual=actual->siguiente;
					flag=false;
				}
			}
			if(flag){
				cout<<"encontrando la pos"<<pos<<endl;
			}else{
				cout<<"no encontrado"<<endl;
			}
		}else{
			cout<<"lista vacia";
		}
}
void eliminar(int aeliminar){
		bool flag;

		cout<<"eliminado"<<aeliminar<<"..."<<endl;
		nodo * actual = new nodo();
		actual = primero;
		if(primero != NULL){
			while(actual!= NULL){
				if(actual->dato==aeliminar){
					actual->dato=actual->siguiente->dato;
					actual->siguiente=actual->siguiente->siguiente;
					flag=true;
				}
				else{
					actual=actual->siguiente;
				}
			}
			if(flag){
				cout<<"Dato eliminado"<<endl;
				imprimir();
			}else{
				cout<<"no encontrado"<<endl;
			}
		}else{
			cout<<"lista vacia";
		}

}
