#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
	{
		float euro,dolar,res;
		int moeda;
		
		printf("Conversao entre Euros e Dolares\n\n");      //1.00€=1.05$
		
		while (moeda!=1 && moeda!=0)
		{
			printf("Escolha a moeda que vai usar: '1' para euro ou '0' para dolar: ");
			scanf("%d",&moeda);	
		}
		
			if(moeda==1)
			{
				printf("Digite o valor: ");
				scanf("%f",&euro);
				res=euro*1.05;
				printf("%.2f euro(s) = %.2f dolar(es)\n\n",euro,res);
			}
			else if(moeda==0)
			{
				printf("Digite o valor: ");
				scanf("%f",&dolar);
				res=dolar/1.05;
				printf("%.2f dolar(es) = %.2f euro(s)\n\n",dolar,res);
			}
		return 0;
	}
