/*
 ============================================================================
 Realizar una funcion con la siguiente firma int CalcularMaximo(int* maximo, int* minimo)
  ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int CalcularMaximo(int*maximo,int*minimo);
int main(void)
{

	setbuf(stdout, NULL);

	int maximo;
	int minimo;

	CalcularMaximo(&maximo, &minimo); //pasaje por referencia

	printf("el maximo es: %d \n", maximo);
	printf("el minimo es: %d ", minimo);

	return EXIT_SUCCESS;
}
int CalcularMaximo(int* maximo, int* minimo)
{
	int retorno = -1;
	int num1;
	int num2;
	int resultSuma=8;

		printf("ingrese un numero");
		scanf("%d", num1);
		printf("ingrese un numero");
		scanf("%d", num2);

		if(maximo != NULL && minimo != NULL)
		{
			retorno = -1;
		if(num1 > num2)
		{
			*maximo = num1;
			*minimo = num2;
		}
		else
		{
			*maximo = num2;
			*minimo = num1;
		}
		}

		 return retorno;
}
