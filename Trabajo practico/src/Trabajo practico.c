/*
 ============================================================================
 Name        : Trabajo.c
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
	int menu;
	int respuesta;
	float* kms;
	int retornouno;
	int retornodos;
	float* preciouno;
	float* preciodos;

	do{
		respuesta = utn_getNumero(&menu,"1.Ingresar kilometros.\n 2.ingresar precio de vuelos. \n 3.Calcular costos.\n 4.Informar resultados.\n 5.Carga forzada de datos.\n 8.Salir.\n");
		if(respuesta ==0 ){
			switch(menu){
			case 1:
				retornouno=ingresarkms(&kms);
				break;
			case 2:
				if(retornouno==1){
					retornodos=preciosvuelos(preciouno,preciodos);
				}else{
					printf("error no se completo la funcion anterior\n");}
				break;
			case 3:
				debitoaerolineas(preciouno,preciodos);
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				printf("finalizando ejecucion");
				break;
				}
			}
		}
	}while(menu == 6)
	{

	}

	return EXIT_SUCCESS;
}
int calculoDebito(km,precio1,precio2)
{
	return 0;
}
void imprimirResultados(float descuento, float interes, float conversor, float precioUni)
{
	printf("\na) Precio con tarjeta de debito: $%.2f\n"
			"b) Precio con tarjeta de credito: $%.2f\n"
			"c) Precio pagando con bitcoin: $%.2f\n"
			"d) Precio unitario $%.2f\n"
			,descuento,interes,conversor,precioUni);
}

