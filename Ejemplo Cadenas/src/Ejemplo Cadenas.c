/*
 ============================================================================
 Name        : Ejemplo.c
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
		char cadena[100];
		char otraCadena[];
		int len;

		printf("Ingrese una cadena");
		fflush(stdin);
		gets(cadena);

		len = strlen(cadena);
		printf("Len : %d\n", len);
		printf("%s",cadena);
		strncpy(cadena,otraCadena,100);*/
		/*
		int comp;
		comp = strcmp("zapato", "zapallo");

		printf("%d", comp);*/

		/*
		strcat(cadena, " ");
		strcat(cadena, otraCadena);
		printf("%s", cadena)
}
