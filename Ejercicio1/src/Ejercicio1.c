/*
 ============================================================================
 Name        : Ejercicio1.c
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
	setbuf(stdout, NULL);
    char sexo;
    int edad;

    printf("\nIngrese su sexo ");
    scanf("%c", &sexo);

    printf("\ningrese su edad ");
    fflush(stdin);
    scanf("%d", &edad);

    printf("\nSu edad es %d y sexo es %c", edad,sexo);

    return 0;
}
