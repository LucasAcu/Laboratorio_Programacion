/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int main(void) {
	int numeros[TAM]= {4,2,9,7,6};
	int aux;

	for(int i=0; i<TAM-1; i++)
	{
		for(int j=i+1; j<TAM;j++)
		{
		if(numeros[i]<numeros[j])
		{
			aux =numeros[i];
			numeros[i]=numeros[j];
			numeros[j]=aux;
		}
		}
	}
	for(int i=0; i<TAM;i++)
	{
		printf("%d",numeros[i]);
	}
	return EXIT_SUCCESS;
}

