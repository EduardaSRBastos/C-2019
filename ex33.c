#include <stdio.h>

int main()
	{
		int num,seq[20],i,a=0,b=1,auxiliar;
		
		printf("Insira um numero: ");
		scanf("%d",&num);
		
		if(num==1)
		printf("O primeiro numero da sequencia de Fibonacci: 1");
		else if (num==2)
		printf("Os %d primeiros numeros da sequencia de Fibonacci: 1 1",num);
		else if(num>2)
		{
			printf("Os %d primeiros numeros da sequencia de Fibonacci: 1 ",num);
			for(i=0;i<num-1;i++)
			{
			    auxiliar = a + b;
   				a = b;
   				b = auxiliar;
				printf(" %d ",auxiliar);
			}	
		}
		
		return 0;
	}
