//============================================================================
// Name        : practica.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	char nombre[30];
	int a=0, e=0, i=0, o=0, u=0;
	cout<<"----------CADENAS DE CARACTERES-------------"<<endl;
	cout<<"ingrese su nombre: ";
	//cin>>nombre;
	cin.getline(nombre,30);
	cout<<"su nombre es: "<<nombre<<endl;
	for(int j=0; j<30; j++){
		if(nombre[j]=='a'||nombre[j]=='A'){
			a++;
		}
		if(nombre[j]=='e'||nombre[j]=='E'){
			e++;
			}
		if(nombre[j]=='i'||nombre[j]=='I'){
			i++;
			}
		if(nombre[j]=='o'||nombre[j]=='O'){
			o++;
			}
		if(nombre[j]=='u'||nombre[j]=='U'){
			u++;
			}
}
	cout<<"letras a: "<<a<<endl;
	cout<<"letras e: "<<e<<endl;
	cout<<"letras i: "<<i<<endl;
	cout<<"letras o: "<<o<<endl;
	cout<<"letras u: "<<u<<endl;
	system("pause");
	return 0;
}
