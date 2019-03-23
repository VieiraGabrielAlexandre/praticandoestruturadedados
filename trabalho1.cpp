#include <stdio.h>
#include <stdlib.h>

main (){
	int vet [5];
	for (int i = 0; i <= 4; i++)
	{
		printf ("Digite a posicao %i do vetor = ", i);
		scanf("%i", &vet[i]);
	} 
	for (int i = 4; i >= 0; i--)
	{
		 printf ("%i\n", vet[i]);
	}
}
