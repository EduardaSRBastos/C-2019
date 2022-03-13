#include <stdio.h>
#include <math.h>

int main()
	{
		int num1,num2;
		
		printf("Insira o primeiro numero: ");
		scanf("%d",&num1);
		printf("Insira o segundo numero: ");
		scanf("%d",&num2);
		
		if(num1<num2)
		{
			printf("O numero %d e menor que %d",num1,num2);
		}
		else if(num2<num1)
		{
			printf("O numero %d e menor que %d",num2,num1);
		}
		else
		printf("O numero %d e igual a %d",num1,num2);
		
		return 0;
	}
