#include <stdio.h>
#include <stdlib.h>
main ()
{
	char matriz[3][3];
	int vet[9];
	int jogada = 0;
	int coluna, linha;
	
	for (int i = 0; i <= 8; i++)
	{
		if (jogada % 2 == 0)
		{
			printf ("\nVez do O digite a coluna e linha = ");
			scanf ("%i%i", &coluna, &linha);
			matriz[coluna][linha] = 'O';
			jogada ++;
		} else {
			printf ("\nVez do X difigite a coluna e linha = ");
			scanf ("%i%i", &coluna, &linha);
			matriz [coluna][linha] = 'X';
			jogada++;
		}
	}
		printf ("%c | %c | %c \n", matriz[0][0], matriz[0][1], matriz[0][2]);
		printf ("%c | %c | %c \n", matriz[1][0], matriz[1][1], matriz[1][2]);
		printf ("%c | %c | %c \n", matriz[2][0], matriz[2][1], matriz[2][2]);
		
		if (matriz[0][0] == 'O' && matriz[0][1] == 'O' && matriz[0][2] == 'O') printf ("O jogador 'O' ganhou !\n");
		if (matriz[1][0] == 'O' && matriz[1][1] == 'O' && matriz[1][2] == 'O') printf ("O jogador 'O' ganhou !\n");
		if (matriz[2][0] == 'O' && matriz[2][1] == 'O' && matriz[2][2] == 'O') printf ("O jogador 'O' ganhou !\n");
		if (matriz[0][0] == 'O' && matriz[1][1] == 'O' && matriz[2][2] == 'O') printf ("O jogador 'O' ganhou !\n");
		if (matriz[0][2] == 'O' && matriz[1][1] == 'O' && matriz[2][0] == 'O') printf ("O jogador 'O' ganhou !\n");
		if (matriz[0][0] == 'O' && matriz[1][0] == 'O' && matriz[2][0] == 'O') printf ("O jogador 'O' ganhou !\n");
		if (matriz[0][1] == 'O' && matriz[1][1] == 'O' && matriz[1][2] == 'O') printf ("O jogador 'O' ganhou !\n");
		if (matriz[0][2] == 'O' && matriz[1][2] == 'O' && matriz[2][2] == 'O') printf ("O jogador 'O' ganhou !\n");
		if (matriz[0][0] == 'X' && matriz[0][1] == 'O' && matriz[0][2] == 'X') printf ("O jogador 'X' ganhou !\n");
		if (matriz[1][0] == 'X' && matriz[1][1] == 'X' && matriz[1][2] == 'X') printf ("O jogador 'X' ganhou !\n");
		if (matriz[2][0] == 'X' && matriz[2][1] == 'X' && matriz[2][2] == 'X') printf ("O jogador 'X' ganhou !\n");
		if (matriz[0][0] == 'X' && matriz[1][1] == 'X' && matriz[2][2] == 'X') printf ("O jogador 'X' ganhou !\n");
		if (matriz[0][2] == 'X' && matriz[1][1] == 'X' && matriz[2][0] == 'X') printf ("O jogador 'X' ganhou !\n");
		if (matriz[0][0] == 'X' && matriz[1][0] == 'X' && matriz[2][0] == 'X') printf ("O jogador 'X' ganhou !\n");
		if (matriz[0][1] == 'X' && matriz[1][1] == 'X' && matriz[1][2] == 'X') printf ("O jogador 'X' ganhou !\n");
		if (matriz[0][2] == 'X' && matriz[1][2] == 'X' && matriz[2][2] == 'X') printf ("O jogador 'X' ganhou !\n");
	
}
