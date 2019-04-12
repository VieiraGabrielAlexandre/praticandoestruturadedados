#include <stdio.h>
#include <stdlib.h>
main (){
	char string[15], string2[15], substring[15];
	int cont = 0, cont2 = 0, cont3 = 0, encontrado = 0;
	
	printf ("Digite uma palavra: ");
	gets(string);
	printf ("Digite outra palavra: ");
	gets (string2);
	
	printf ("String1 = ");
	for (int i = 0; i <= 15; i++)
	{
		if (string[i] == '\0')
		{
			break;
		} else {
			printf ("%c",string[i]);
			cont++;
		}
	}
	
	printf ("\nString2 = ");
	for (int i = 0; i <= 15; i++)
	{
		if (string2[i] == '\0')
		{
			break;
		} else {
			printf ("%c", string2[i]);
			cont2++;
		}
	}
	
	printf ("\n");
	for (int i = 0; i<=cont; i++) // Loop entre a primeira string
	{
		if (string2[0] == string[i]) // Se o primeiro caracterer da segunda string for encontrado em uns dos caracteres da primeira
		{
			for (int j = 0; j <=cont2; j++) // Faz um loop com a quantidade da segunda string
			{
				if (string2[j] == string[i]){ 
					cont3++;
					i++;
					if(cont3 == cont2) // Verifica se a contagem de letras bateu com a contagem da segunda string
					{
						printf("\n %s eh uma substring", string2);
						break;
					}
				} else {
					printf ("\n %s Nao eh uma substring\n", string2);
					break;
				}
			}
		}
	}
}
