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
	setbuf(stdout,NULL);

	char caracter[5];

	int len;

	printf("ingrese una cadena");
	fflush(stdin);
	gets(caracter);

	len = strlen(caracter);
	printf("Len: %d\n",len);
	printf("%s",caracter);





	return EXIT_SUCCESS;
}
