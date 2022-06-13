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

int numeroUno;
int numeroDos;
int resultado;

int main(void) {

	printf("ingresa un numero");
	scanf("%d", &numeroUno);

	printf("ingresa un numero");
	scanf("%d", &numeroDos);
	resultado=numeroUno+numeroDos;
	printf("\nLa suma entre %d y &d da como resultado:", numeroUno,numeroDos,resultado);
	return EXIT_SUCCESS;
}
