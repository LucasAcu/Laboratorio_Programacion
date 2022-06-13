/*
 ============================================================================
 Name        : el.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int funcion(int* sumaPositivos, int* productoNegativos);
int main(void) {

	setbuf(stdout, NULL);

	int sumaPositivos;
	int productoNegativos;

	funcion(&sumaPositivos, &productoNegativos);

	printf("la suma de los positivos es: %d \n", sumaPositivos);
	printf("los productos negativos son: %d ", productoNegativos);

	return EXIT_SUCCESS;
}
int funcion(int* sumaPositivos, int* productoNegativos)
{
	int retorno = -1;
	int numero;
	int negativo=1;
	int positivo;
	int respuesta=0;

	if(sumaPositivos != NULL && productoNegativos != NULL)
	{
	retorno=1;
	while(respuesta==0)
	{
		printf("ingrese un numero");
		scanf("%d", &numero);

		if(numero<0)
		{
			negativo=negativo*numero;
		}
		else
		{
			positivo=positivo+numero;
		}
		printf("ingresa otro numero? 1=n0 0=si");
		scanf("%d", &respuesta);
	}
	*sumaPositivos=positivo;
	*productoNegativos=negativo;
	}
	return retorno;
}
