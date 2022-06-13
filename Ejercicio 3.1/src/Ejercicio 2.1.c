/*
 ============================================================================
 Name        : 1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

void mostrar (int num);
int main(void)
{
	setbuf(stdout, NULL);
	int ingresado;


	printf("ingresae un numero entero");
	scanf("%d", &ingresado);

	mostrar(ingresado);

}
void mostrar(int num)
{
	printf("el numero ingresado es %d", num);
}
