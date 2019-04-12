#include <stdio.h>
#include <stdlib.h>
main (){
	int i,j,x;
	char jogo[3][3];
	int jogada[9];
	int coluna, linha;
	for (x = 0; x <= 8; x++)
	{
		if (x % 2 == 0)
		{
			printf ("Digite a Coluna para receber o Circulo e Logo em seguida a Linha\n");
			scanf ("%i",&i);
			scanf ("%i",&j);
			if (jogo[i][j] = 'O'){
				printf ("Valor já preenchido, se digitar um campo preenchido, encerraremos o programa !\n");
				printf ("Digite a Coluna para receber o Circulo e Logo em seguida a Linha\n");
				scanf ("%i",&i);
				scanf ("%j",&j);
				if (jogo[i][j] = 'O'){
					break;
				}
			}
			jogo[i][j] = 'O';
		}
		else {
					if (x % 2 == 0)
		{
			printf ("Digite a Coluna para receber o X e Logo em seguida a Linha\n");
			scanf ("%i",&i);
			scanf ("%j",&j);
			if (jogo[i][j] = 'X'){
				printf ("Valor já preenchido, se digitar um campo preenchido, encerraremos o programa !\n");
				printf ("Digite a Coluna para receber o X e Logo em seguida a Linha\n");
				scanf ("%i",&i);
				scanf ("%j",&j);
				if (jogo[i][j] = 'X'){
					break;
				}
			}
			jogo[i][j] = 'X';
		}
	}
}
}
