#include <stdio.h>
#include <stdlib.h>

int main (){
	int vet[5];
	int busca = 0;
	int i = 0;
	for (i = 0; i <= 4; i++)
	{
		printf ("Digite o numero %i do vetor = ",i);
		scanf ("%i", &vet[i]);
		if (vet[i] % 2 == 1)
		{
			busca++;
		}
		
	} 
		if (busca>0)
			printf ("Foram digitados %i numeros impares: ", busca);
		else 
			printf ("Nao possui impares\n");
	for (i = 0; i <= 4; i++)
	{
		if (vet[i] % 2 == 1)
		{
			printf (" %i",vet[i]);
		}
	}
}

