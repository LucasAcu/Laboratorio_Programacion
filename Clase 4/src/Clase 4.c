/*
 ============================================================================
 Name        : Clase.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float resultado;
	int numero1;
	int numero2;
	int respuesta;

	printf("\nNumero1?:");
	scanf("%d",&numero1);
	printf("\nNumero2?:");
	scanf("%d",&numero2);

	respuesta = dividir(&resultado,numero1,numero2);
	if(respuesta == 0)
	{
		printf("El resultado es: %f\n",resultado);
	}
	else
	{
		printf("No es posible dividir por cero\n");
	}
	return EXIT_SUCCESS;
}

int dividir (float* pResultado,int operador1,int operador2)
{
	float resultado;
	int retorno = -1;
	if(operador2 != 0)
	{
		resultado = (float)operador1 / operador2;
		*pResultado= resultado;
		return 0;
	}
	return retorno;

}

