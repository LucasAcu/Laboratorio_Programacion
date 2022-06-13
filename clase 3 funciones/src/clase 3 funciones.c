

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int num1;
	int num2;
	int suma;

	printf("Ingrese un numero\n");
	scanf("%d",&num1);
	printf("ingrese otro numero\n");
	scanf("%d",&num2);

	suma=num1+num2;
	if(suma>100)
	{
		suma=100;
	}
	printf("La suma es: %d",suma);
	return EXIT_SUCCESS;
}
