#include <stdio.h>
#include <stdlib.h>
main (){
	int matriz[3][2];
	int maior, coluna, linha;
	for (int i = 0; i <=2; i++){
		for (int j = 0; j <=1;j++){
			printf ("Digite a posicao da Coluna %i e Linha %i = \n", i, j);
			scanf ("%i", &matriz[i][j]);
			if(i==0 && j==0){
			 	maior = matriz[0][0];
			 	coluna = j;
				linha = i;
			}
			if (matriz[i][j]>maior)
			{
				maior = matriz[i][j];
				coluna = i;
				linha = j;
			}
		}
	}
		printf ("O maior numero eh %i ele esta na Coluna %i e Linha %i",maior,coluna,linha);

}
