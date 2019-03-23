#include <stdio.h>
#include <stdlib.h>

int main (){
	int vet[5];
	int menor;
	int i = 0;
	for (i = 0; i <= 4; i++)
	{
		printf ("Digite o numero %i do vetor = ",i);
		scanf ("%i", &vet[i]);
	}
	menor = vet[0];
	for (i = 0; i<=4; i++)
	{
		if (vet[i] < menor)
		{
			menor = vet[i];
		}
	}
	printf ("%i", menor);
}
