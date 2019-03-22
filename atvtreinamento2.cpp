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
	printf ("Digite o numero para efetuar a busca = ");
	scanf("%i", &busca);
	for (int i = 0; i <= 4; i++)
	{
		if (busca == vet[i])
			printf ("O indice eh %i", i);	
	}
}
