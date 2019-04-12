#include <stdio.h>
#include <stdlib.h>

main (){
	char nome[15];
	int i = 0, cont = 0;
	
	printf ("Digite seu nome: \n");
	gets (nome);
	while (1){
		if (nome[i] == '\0') { break;}
		else {
			for (i = 0; i <= 15; i++)
			{
				printf ("%c", nome[i]);
				cont ++;
				if (nome[i] == '\0') { break;}
			}
			fflush (stdin);
			for (i = 0; i <= cont; i++)
			{
				fflush (stdin);
				if (nome[i] == '\0'){
					printf ("\n");
					break;
				} else {
				nome[i] = nome[i] - 32;
				printf ("%c", nome[i]);
			}
			fflush (stdin);
			}
		}
	}
}
