#include <stdio.h>
#include <stdlib.h>

int main (){
	int vet[5];
	int busca;
	for (int i = 0; i <= 4; i++)
	{
		printf ("Digite o numero %i do vetor = ",i);
		scanf ("%i", &vet[i]);
	}
	for (int i = 0; i <= 4; i++)
	{
		if (vet[i] % 2 == 1)
			printf ("%i eh impar\n", vet[i]);	
	}
}
