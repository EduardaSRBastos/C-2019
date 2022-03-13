#include <stdio.h>

int main()
	{
		int num,fatorial,i;
		
		printf("Insira um numero: ");
		scanf("%d",&num);
		fatorial=num;
		for(i=num-1;i>0;i--)
		{
			fatorial=fatorial*i;
		}
		
		printf("Fatorial de %d: %d",num,fatorial);
		
		return 0;
	}
