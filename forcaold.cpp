#include <stdio.h>
#include <stdlib.h>

main (){
	char palavrasecreta[15], letra, jogadas[15];
	int contador = 0, tentativas = 5, contador2 = 0, contador3 = 0;
	for (int i = 0; i <= 15; i++){
		palavrasecreta[i] = 0;
		jogadas[i] = 0;
	}
	printf ("Digite a palavra secreta = \n");
	gets (palavrasecreta);
	for (int i = 0; i <= 15; i++)
	{
		if (palavrasecreta[i] == '\0')
		{
			break;
		} else {
			contador++;
		}
	} 
	printf ("A Palavra secreta contem %i letras\n", contador);
	 
	while (tentativas >= 0 || contador2 == contador)
	{	
		if (tentativas == 0){
			printf ("\nPERDEU !\n");
			break;
		}
		if (contador2 == contador){
		printf ("\nGANHOU !\n");
		break;
		}
			printf ("\nVoce possui %d tentativas.\nDigite sua tentativa : \n", tentativas);
			if (tentativas == 5) printf ("|");
			if (tentativas == 4) printf ("|<");
			if (tentativas == 3) printf ("|<|");
			if (tentativas == 2) printf ("|<|L");
			if (tentativas == 1) printf ("|<|LL");
			if (tentativas == 0) printf ("|<|LL|");
			scanf ("%c", &letra);
			fflush(stdin);
				for (int i = 0; i <= contador; i++)
				{
					if (palavrasecreta[i] == letra)
					{
						jogadas[i] = letra;
						contador2++;
					}
				}				
				for (int i = 0; i < contador; i++)
				{
					if (jogadas[i] == palavrasecreta[i]){
					printf ("%c", jogadas[i]);
				} else {
					printf ("_");
				} if (contador == contador3){
					tentativas--;
					printf ("Quantidade de tentativas %d\n", tentativas);
				}
				}
	}
}
