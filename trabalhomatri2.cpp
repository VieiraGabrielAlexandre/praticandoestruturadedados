#include <stdio.h>
#include <stdlib.h>
main (){
	int matriz[3][2];
	int soma1,soma2,soma3;
	for (int i = 0; i <=2; i++){
		for (int j = 0; j <=1;j++){
			printf ("Digite a posicao da Coluna %i e Linha %i = \n", i, j);
			scanf ("%i", &matriz[i][j]);
		}
	}
	soma1 = matriz[0][0] + matriz[1][1];
	soma2 = matriz[1][0] + matriz [1][1];
	soma3 = matriz[2][0] + matriz [2][1];
	if (soma1 < soma2 && soma1 < soma3) printf ("A Linha com a menor soma eh 0");
	if (soma2 < soma1 && soma2 < soma3) printf ("A Linha com a menor soma eh 1");
	if (soma3 < soma1 && soma3 < soma2) printf ("A Linha com a menor soma eh 2");
}
