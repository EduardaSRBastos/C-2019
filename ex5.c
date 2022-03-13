#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
	{
		float a,b,h;
		
		printf("Area de um triangulo\n\n");
		printf("Insira o valor da base do triangulo: ");
		scanf("%f",&b);
		printf("Insira o valor da altura do triangulo: ");
		scanf("%f",&h);
		a=(b*h)/2;
		printf("Area do triangulo: %.1f cm^2.\n\n",a);
		
		system("pause");
		exit(0);
		
	}

