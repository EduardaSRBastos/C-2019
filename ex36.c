#include <stdio.h>

int main()
	{
		float num,max=0,min=50,media,i,soma=0;
		
		for(i=1;i<=12;i++)
		{
			printf("Insira a %.0fa temperatura: ",i);
			scanf("%f",&num);
			if(num>max)
			max=num;
			if(num<min)
			min=num;
			soma=soma+num;
		}
		media=soma/12;
		printf("A temperatura maxima e de %.1f graus e a minima de %.1f graus. A media e: %.1f graus. ",max,min,media);
		return 0;
	}
