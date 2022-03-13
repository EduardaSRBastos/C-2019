#include <stdio.h>
#include <math.h>

int main()
	{
		int numero;
		
		printf("Insira um numero inteiro: ");
		scanf("%d",&numero);
		
		if(numero%2==0)
		{
			printf("O numero %d e par.",numero);
		}
		else
		printf("O numero %d e impar.",numero);
		
		return 0;
	}
