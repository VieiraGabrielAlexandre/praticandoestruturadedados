#include <stdio.h>
#include <stdlib.h>

main ()
{
	int i,j;
	int matriz[2][3];
	for (i = 0; i<=1; i++)
		for (j = 0; j<=2; j++)
		{
			printf ("Digite o valor da Coluna [%i] Linha [%i] = ", i,j);
			scanf ("%i", &matriz[i][j]);
			printf ("\n\n");
		}
	for (i = 0; i<=1; i++)
		for (j = 0; j<=2; j++)
		{
			printf ("O valor da Coluna [%i] Linha [%i] = %i ",i,j,matriz[i][j]);
			printf ("\n");
		}
}
