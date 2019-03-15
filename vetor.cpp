#include <stdio.h>
#include <stdlib.h>

main ()
{
	int vetor[4];
	int valores[4];
	int i, j =0;
	for (i; i <=4; i ++)
	{
		printf ("Digite o numero %i do vetor\n", i);
		scanf ("%d", &valores[i]);
	}
	for (j; j <=4; j++)
	{
		printf ("Valor da posição %i eh %i\n", i, valores[j]);
	}
	
}
