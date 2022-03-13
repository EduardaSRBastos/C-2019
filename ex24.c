#include <stdio.h>

int main()
	{
		int num,maior=-9999,i;
		
		for(i=1;i<=50;i++)
		{
			printf("Insira o %do numero: ",i);
			scanf("%d",&num);
			if(num>maior)
			{
				maior=num;
			}
		}
		printf("O numero maior que inseriu foi o %d.",maior);
		
		return 0;
	}
