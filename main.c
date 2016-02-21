#include <stdio.h>

int main (int argc, char *argv[])
{
	//1*2*3*4*5

	int numero=0;
	int resultado=1;
	int i=0;

	printf("Introduce el numero para calcular el factorial: ");
	scanf("%d", &numero);

	for(i=2; i<=numero; i++){
		resultado = resultado * i;
	}

	printf("El factorial de %d es %d\n", numero, resultado);

	return 0;
}

