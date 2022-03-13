#include <stdio.h>
#include <stdlib.h>

void main()
	{
		float n;
		
		printf("Insira o valor da nota: ");
		scanf("%f",&n);
		
		if(n>20)
		{
			printf("Inseriu um valor invalido.\n\n");
		}
		else
		{		
			if(n>=9.5 && n<=20)
			{
				printf("\nEsta aprovado.\n\n");
			}
			else
			{
				printf("\nEsta reprovado.\n\n");
			}
		}
		
		system("pause");
		exit(0);
	}
