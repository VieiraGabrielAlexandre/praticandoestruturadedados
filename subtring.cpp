#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main (){
	char palavra1 [15];
	char palavra2 [15];
	int i = 0, j = 0;
	
	for (int i = 0; i <=10; i++)
	{
		palavra1[i] = 0;
		palavra2[i] = 0;
	}
	
	gets (palavra1);
	while (palavra1[i] == '\n');
	gets (palavra2);
	while (palavra2[j] == '\n')
	strlwr(palavra1);
	for (int i = 0; i <= 15; i++)
	{
		if (palavra2[j] == palavra1[i])
		{
			printf("%c", palavra2[j]);
			j++;
		}
		if (palavra2[j] == '\0'){
			printf ("\nPalavra eh uma Substring");
			break;
		}
	}
}

