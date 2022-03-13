#include <stdio.h>

int main()
	{
		int num;
		
		while (num<0)
		{
			printf("Digite um numero positivo: ");
			scanf("%d",&num);
		}
		printf("O numero positivo foi: %d",num);
		
		return 0;
	}
