#include <stdio.h>
#include <stdlib.h>

main (){
	int vet [5];
	int somaPar = 0;
	for (int i = 0; i <= 4; i++)
	{
		printf ("Digite a posicao %i do vetor = ", i);
		scanf("%i", &vet[i]);
		if (vet[i] % 2 == 0)
		{
			somaPar = somaPar + vet[i];
		}
	} 
	printf ("O total da soma dos pares eh = %i", somaPar);
}
