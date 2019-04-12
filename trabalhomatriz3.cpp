#include <stdio.h>
#include <stdlib.h>
main (){
	int matriz[3][2];
	int impar;
	for (int i = 0; i <=2; i++){
		for (int j = 0; j <=1;j++){
			printf ("Digite a posicao da Coluna %i e Linha %i = \n", i, j);
			scanf ("%i", &matriz[i][j]);
			if(matriz[i][j] % 2 == 1){
				matriz[i][j] = 0;
			}
		}
	}
	for (int i = 0; i <=2; i++){
		for (int j = 0; j <=1;j++){
				if (matriz[i][j] == 0)
				{
					printf ("");
				} else 
			printf ("Na Coluna %i e Linha %i foi Digitado o numero par %i\n",i,j,matriz[i][j]);
		}
	}
}
