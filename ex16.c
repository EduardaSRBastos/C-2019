#include <stdio.h>
#include <math.h>

int main()
	{
		int num1,num2,num3;
		
		printf("Insira o primeiro numero: ");
		scanf("%d",&num1);
		printf("Insira o segundo numero: ");
		scanf("%d",&num2);
		printf("Insira o terceiro numero: ");
		scanf("%d",&num3);
		
		if(num1>num2 && num1>num3)
		{
			printf("O numero %d e maior que %d e %d.",num1,num2,num3);
		}
		else if(num2>num1 && num2>num3)
		{
			printf("O numero %d e maior que %d e %d.",num2,num1,num3);
		}
		else if(num3>num1 && num3>num2)
		{
			printf("O numero %d e maior que %d e %d.",num3,num2,num1);
		}
		else
		printf("Os numeros sao iguais.");
		
		return 0;
	}
