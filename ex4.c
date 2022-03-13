#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
	{
		float h,r,v,pi= 3.141592654;
		
		printf("Volume de um cilindro\n\n");
		printf("Insira o valor da altura do cilindro: ");
		scanf("%f",&h);
		printf("Insira o valor do raio do cilindro: ");
		scanf("%f",&r);
		v=h*pi*pow(r,2);
		printf("Volume do cilindro: %.2f cm^3.\n\n",v);
		
		system("pause");
		exit(0);
		
	}
