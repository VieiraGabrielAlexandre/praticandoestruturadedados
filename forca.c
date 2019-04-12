#include <stdio.h>
#include <stdlib.h>

static int MAX = 50;

int main(){
	char entrada[MAX], *palavraAtual, letra;
	int ganhou = 0, count = 0, qtdNulo = 0, qtdNuloTemp = 0, tentativas = 5;
	
	printf("\nDigite a palavra: ");
	gets(entrada);
	
	for(int i = 0; i < MAX; i++)
		if(entrada[i] != '\0')
			count++;
		else
			break;
	
		printf("A palavra contem %d letras.\n", count);
		
		palavraAtual = (char*)malloc(sizeof(char)*count);
		
		for(int i = 0; i < count; i++) // Preencher com vazio
			palavraAtual[i] = ' ';
		
		// ganhou = 1 / perdeu -1
		
	while(ganhou == 0){
		
		printf("\nVoce possui %d tentativas. Digite a letra: ", tentativas);
		scanf("%c", &letra);
		fflush(stdin);
		
		for(int i= 0; i < count; i++){
			if(entrada[i] == letra)
				palavraAtual[i] = letra;
		}
		
		qtdNuloTemp = qtdNulo;
		qtdNulo = 0;
		
		for(int i= 0; i < count; i++){
			printf(" %c ", palavraAtual[i]);
			
			if(palavraAtual[i] == 32)
				qtdNulo++;
		}
			if(qtdNuloTemp == qtdNulo || qtdNulo == count){ // Se continuar a mesma quantidade de nulos, é uma tentativa invalida
				tentativas--;
				printf("Letra %c nao existe!\n", letra);
			}
			
			if(qtdNulo == 0)
				ganhou = 1;
			else if(tentativas == 0)
				ganhou = -1;
	}
    
    switch(ganhou){
    	case -1:
    		printf("\nperdeu");
    	break;
    	case 1:
    		printf("\nganhou");
    	break;
	}
}