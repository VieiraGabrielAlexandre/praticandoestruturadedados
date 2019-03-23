#include <stdio.h>
#include <stdlib.h>

main (){
	int vet [5];
	int oculto;
	for (int i = 0; i <= 4; i++)
	{
		printf ("Digite a posicao %i do vetor = ", i);
		scanf("%i", &vet[i]);
	} 
	printf ("Digite um numero para ocultar = ");
	scanf ("%i", &oculto);
	for (int i = 0; i <=4; i++)
	{
		if (vet[i] == oculto) 
		{
			printf ("");
		} else 
		{
			printf ("Numero = %i\n", vet[i]);
		}
	}
}
