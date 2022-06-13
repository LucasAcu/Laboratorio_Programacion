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

int main(void) {

	setbuf(stdout, NULL);
	int notas[5];
	int continuar=1;
	int direccion;
	int notaIngresada;

	for(int i =0; i<5; i++)
	{
		notas[i] = -1;
	}

	do
	{

		printf("Direct.: \n");
		scanf("%d", &notaIngresada);
		while(direccion >4 || direccion <0)
		{
			printf("error.direc.: \n");
			scanf("%d", &direccion);
		}
		printf("nota: ");
		scanf("%d", &notaIngresada);
		while(notaIngresada > 10 || notaIngresada <1)
		{
			printf("error. nota: \n");
			scanf("%d", &notaIngresada);
		}
	notas[direccion] = notaIngresada;
	printf("continuar? 1/0");
	scanf("%d", &continuar);
}while(continuar ==1);

for(int i =0; i<5; i++)
{
	printf("%d \n", notas[i]);
}
	return EXIT_SUCCESS;
}

