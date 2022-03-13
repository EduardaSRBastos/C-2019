#include <stdio.h>

int main()
	{
		int num,aux,i;
		
		printf("Insira um numero: ");
		scanf("%d",&num);
		
		for(i=1;i<=num;i++)
		{
			if(num%i==0)
			aux++;
		}
		
		if(aux==2)
		printf("O numero %d e primo.",num);
		else
		printf("O numero %d nao e primo.",num);
		
		return 0;
	}
