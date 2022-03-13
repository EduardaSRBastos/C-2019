#include <stdio.h>

int main()
	{
		int i,soma=0;
		
		for(i=1;i<21;i++)
		{
			if(i%2==0)
			{
				soma=soma+i;
			}
		}
		
		printf("A soma dos primeiros 20 numeros pares: %d",soma);
		return 0;
	}
