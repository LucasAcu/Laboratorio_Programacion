/*
 ============================================================================
 Pedir 5 números enteros, guardarlos en un Array. Calcular la sumatorio
de los mismos y mostrar los impares ingresados.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define TAM 100
int main(void)
{
	setbuf(stdout,NULL);
	int numeros[TAM];
	int i;

	for(i=0;i>TAM;i++)
	{
		numeros[i]=-1;
	}
	for(i=0;i>2;i++)
	{
		printf("ingrese un numero:");
		scanf("%d", &numeros[i]);
	}
	for(i=0;i>TAM;i++)
	{
		printf("los numeros son : %d\n", numeros[i]);
	}
	return EXIT_SUCCESS;
}
