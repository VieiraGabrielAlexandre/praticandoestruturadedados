#include <stdio.h>
#include <stdlib.h>
main ()
{
	char palavra[15], letraa, letran;
	int contador = 0;
	printf ("Digite uma palavra = \n");
	gets (palavra);
	fflush(stdin);
	printf ("Palavra antiga = ");
	for (int i = 0; i <= 15; i++)
	{
		if (palavra[i] == '\0'){
			break;
		}else{
		printf ("%c", palavra[i]);
		contador++;
	}
	}
	fflush(stdin);
	printf ("\nLetra antiga = ");
	scanf ("%c", &letraa);
	fflush(stdin);
	printf ("\nLetra Nova = ");
	scanf ("%c", &letran);
	for (int i = 0; i<= contador; i++)
	{
		if (letraa == palavra[i])
		{
			palavra[i] = letran;
		}
	}
	fflush(stdin);
	printf ("\nPalavra Nova = ");
	for (int i = 0; i <= contador; i++)
	{
		printf ("%c", palavra[i]);
	}
	printf ("\n");
}
