

#include <stdio.h>
#include <stdlib.h>


retorno;
int main(void)
{
	int numero1;
	int numero2;



	printf("Imprimir un numero");
	scanf("%d", &numero1);

	printf("imprimir un numero\n");
	scanf("%d", &numero2);


}
int suma(int numero1,int numero2,int* pResultado) // @suppress("No return")
{
	pResultado = numero1 + numero2;
	if(pResultado != NULL)
	{
		printf("Se pudo realizar la suma");
		retorno=1;
	}
	else
	{
		printf("Realice alguna suma");
		retorno=0;
	}
	retorno=1;
}


