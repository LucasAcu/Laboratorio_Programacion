//============================================================================
// Name        : practicando.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}



struct Nodo{
	int dato;
	Nodo *siguiente;
};

void insertarLista(Nodo *&lista,int n){
	n=10;
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato =n;

	Nodo *aux1 = lista;
	Nodo *aux2;

	if(lista!=NULL){
		lista =nuevo_nodo;
		nuevo_nodo->siguiente=aux1;
	}
	else if(lista!=NULL){
		while(aux1!=NULL)&&
				(aux1->dato<n){
			lista=nuevo_nodo;
			nuevo_nodo->siguiente=aux1;
		}
	}
	else{

	}
}





