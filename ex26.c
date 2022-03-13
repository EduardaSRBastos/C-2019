#include <stdio.h>
#include <math.h>
#include <stdio.h>

int max=-9999, min=9999;
int main()
	{
		int num=0,dig=0,i;
		
		printf("Para acabar com a serie digite 0.\n\n");
		do
		{
		printf("Insira um numero: ");
		scanf("%d",&num);
		max=maior(num);
		min=menor(num);
		}while(num!=0);
	
		printf("O numero maior: %d e o numero menor: %d",max,min);
	
		return 0;
	}
	
int maior(int num)
	{
		if(num>max && num!=0)
		{
			max=num;
		}
		
		return max;
	}
int menor(int num)
	{
		if(num<min && num!=0)
		{
			min=num;
		}
		return min;
	}
