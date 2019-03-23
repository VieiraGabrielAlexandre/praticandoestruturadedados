#include <stdio.h>
#include <stdlib.h>

main (){
	int vet [5];
	int busca, conta = 0;
	int j = 0;
	for (int i = 0; i <= 4; i++)
	{
		printf ("Digite a posicao %i do vetor = ", i);
		scanf("%i", &vet[i]);
	} 
	while (j < 1)
	{
		printf ("Digite um numero para busca = ");
		scanf ("%i", &busca);
		for (int i = 0; i <= 4; i++)
		{
			if (vet[i] == busca)
			{
			conta++;
			j++;
			}
		}
		if (conta > 0){
		printf ("O numero %d foi digitado %i vezes", busca, conta);	
		} else {
			printf ("Digite outro numero,pois esse nao esta no vetor\n");
		}
	}
}
