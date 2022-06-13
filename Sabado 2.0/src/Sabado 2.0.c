/*
 ============================================================================
 Ejercicio 2.0
 Acuña Lucas
Crear una función que reciba como parámetro dos números enteros, que realice el promedio de los números y que retorne dicho valor.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float Calcularpromedio(int , int );
int main(void) {

	float promedio;

	promedio= CalcularPromedio(5,9);//parametros actuales

	printf("El promedio es: %.2f \n",promedio);

	return EXIT_SUCCESS;
}
float CalcularPromedio(int numero1, int numero2)//parametros formales
{
	float promedio;
	int suma;
	suma= numero1 + numero2;
	promedio=(float)suma/2;
	return promedio;
}
//si ya compilo una vez hay que hacer clean proyect
