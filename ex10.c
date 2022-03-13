#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
	{
		float n1,n2,m;
		
		printf("Insira o valor da primeira frequencia: ");
		scanf("%f",&n1);
		printf("Insira o valor da segunda frequencia: ");
		scanf("%f",&n2);
		
		m=(0.4*n1)+(0.6*n2);
		
		if(m>20)
		{
			printf("Inseriu um valor invalido.\n\n");
		}
		else
		{
			if(n1<8.5 || n2<8.5)
			{
				printf("Esta reprovado automaticamente.\n\n");
			}
			else
			{
				if(m>=9.5 && m<=20)
				{
					printf("Esta aprovado.\n\n");
				}
				else
				{
					printf("Esta reprovado.\n\n");
				}
		}
	}
		system("pause");
		exit(0);
	}
