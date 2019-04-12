#include <stdio.h>
#include <stdlib.h>
main (){
	char nome[15];
	int vogal;
	printf ("Digite o nome = \n");
	for (int i = 0; i <= 15; i++)
	{
		scanf ("%c", &nome[i]);
		if (nome [i] == 'A' || nome [i] == 'E' || nome [i] == 'I' || nome [i] == 'O' || nome [i] == 'U')
		vogal++;
		if (nome[i] == '\n')
		break;
	}
	printf ("Numero de vogais = %i\n", vogal);
}
