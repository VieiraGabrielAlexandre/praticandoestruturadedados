#include <stdio.h>
#include <stdlib.h>
main ()
{
	char nome[15];
	int i = 0;
	printf ("Digite o seu nome: ");
	gets (nome);
	while (nome[i] != '\0') i++;
	for (;i>=0;i--)
	{
		printf ("%c", nome[i]);	
	}
}
