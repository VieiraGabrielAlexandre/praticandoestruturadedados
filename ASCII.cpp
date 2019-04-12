#include <stdio.h>
#include <stdlib.h>
main (){
	int i = 0;
	printf("Tabela ASCII\n");
	for (i = 31; i < 127; i ++)
	{
		printf ("%i - %c\n", i,i);
	}
}
