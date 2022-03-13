#include <stdio.h>

int main()
	{
		float base, altura, area;
		
		printf("Insira o valor da base do triangulo: ");
		scanf("%f",&base);
		printf("Insira o valor da altura do triangulo: ");
		scanf("%f",&altura);
		
		area=(base*altura)/2;
		printf("Area do triangulo: %.2f",area);
		return 0;
	}
