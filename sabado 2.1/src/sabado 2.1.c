/*
 ============================================================================
Crear una funci�n que reciba como par�metro un n�mero entero.
La funci�n retorna 1 en caso de que sea positivo, -1 en caso de que sea negativo y 0 en caso de que sea 0.
Realizar la prueba l�gica de la funci�n en el main.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float PositivoNegativo(int numero);
int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
float PositivoNegativo(int numero)
{

	if(numero<0)
	{
		printf("El numero es negativo");
		return 1;
	}
	else
	{
		printf("el numero es positivo");
		return -1;
	}

}
