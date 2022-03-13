#include <stdio.h>

int main()
	{
		int num,i,soma=0;
		float media=0;
		
		for (i=1;i<21;i++)
		{
			printf("Insira o %do numero: ",i);
			scanf("%d",&num);
			
			soma=soma+num;
		}
		media=soma/20;
		if(media>20)
		printf("\nMedia dos 20 numeros: 20.00");
		else
		printf("\nMedia dos 20 numeros: %.2f",media);
		
		return 0;
	}
