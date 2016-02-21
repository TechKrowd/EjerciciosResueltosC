#include <stdio.h>

//0 1 1 2 3 5 8

int main (int argc, char *argv[])
{
	int n = 3;
	int actual, penultimo=0, ultimo=1;
	int i;

	for(i=0; i<n; i++){
		printf("%d ",ultimo);
		actual = penultimo + ultimo;
		penultimo = ultimo;
		ultimo = actual;
	}		
	return 0;
}

