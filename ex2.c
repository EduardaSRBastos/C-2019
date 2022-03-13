#include <stdio.h>
#include <stdlib.h>

int main(void)
	{
		float x,y;
		
		printf("Area do quadrado\n\n");
		printf("Insira o valor do lado do quadrado (cm): ");
		scanf("%f", &x);
		y=x*x; //pow(n,2)
		printf("Area do quadrado: %.1f cm^2.\n\n",y);
		
		system("pause");
		exit(0);
		
	}
