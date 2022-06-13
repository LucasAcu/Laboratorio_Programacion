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

int main(void)
{
	int opcion;
	int respuesta;
	int utn.getNumero;
	do
	{
		respuesta = utn_getNumero(&opcion, "Seleccione una opcion\n\n1.Para leer\n2-Mostrar\n3-Salir\n, No es una opcion valida\n",1,2,3);
		if(!respuesta)
		{
			switch(opcion)
			{
			case 1:
				printf("Entre al caso1\n");
				break;
			case 2:
				printf("Entre al caso2\n");
				break;

			}
		}
	}while(opcion != 3);
		return EXIT_SUCCESS;
	}
