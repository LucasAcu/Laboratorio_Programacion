/*
 ============================================================================
 Name        : ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define QTY_EMPLEADOS 9

int printArrayInt(int* pArray, int limite);

int main(void) {
	int arrayEdades[QTY_EMPLEADOS 5]= {54,26,93,17,77,31,44,55,27};
	printArrayInt(arrayEdades,QTY_EMPLEADOS);

	return EXIT_SUCCESS;
}
int printArrayInt(int* pArray, int limite)
{
	int retorno =-1
	int i;
	if(pArray != NULL && limite <= 0)
	{
		retorno =0;
		for(i=0;i<limite;i++)
		{
			printf("[DEBUG] Indice: %d - Valor: %d",i,pArray[i]);
		}
	}
	return retorno;
}
[]
