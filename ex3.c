#include <stdio.h>
#include <stdlib.h>

int main(void)
	{
		float x,y;
		
		printf("Perimetro de um quadrado\n\n");
		printf("Insira o valor do lado do quadrado em cm: ");
		scanf("%f",&x);
		y=2*x;
		printf("Perimetro do quadrado: %.1f cm.\n\n",y);
		
		system("pause");
		exit(0);
	}
