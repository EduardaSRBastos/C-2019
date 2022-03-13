#include <stdio.h>

int menor=9999;
int min(int num)
	{
		if(num<=menor)
			{
				menor=num;
				return menor;
			}
	}
	
int main()
	{
		int num,i;
		
		for(i=1;i<=30;i++)
		{
			printf("Insira o %do numero: ",i);
			scanf("%d",&num);
			menor=min(num);
		}
		printf("O numero menor que inseriu foi o %d.",menor);
		
		return 0;
	}
	

