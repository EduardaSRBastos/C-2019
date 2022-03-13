#include <stdio.h>

int main()
	{
		int i, soma=0;
		
		for(i=1;i<181;i++)
		{
			soma=soma+i;
		}
		printf("A soma dos primeiros 180 numeros: %d",soma);
		return 0;
	}
