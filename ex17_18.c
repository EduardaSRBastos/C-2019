#include <stdio.h>
#include <math.h>

int main()
	{
		int num1,num2,num3;
		
		printf("Verificar triangulos:\n\n");
		printf("Insira o primeiro valor: ");
		scanf("%d",&num1);
		printf("Insira o segundo valor: ");
		scanf("%d",&num2);
		printf("Insira o terceiro valor: ");
		scanf("%d",&num3);
		
		if(num1==0 || num2==0 || num3==0)
		{
			printf("Nao e possivel criar um triangulo com o valor 0.");
			return 0;
		}
		
		if(num1==num2 && num1==num3 && num2==num3)
		{
			printf("O triangulo e equilatero (todos os lados iguais).");
		}
		else if(num1!=num2 && num1!=num3 && num2!=num3)
		{
			printf("O triangulo e escaleno (todos os lados diferentes).");
		}
		else
		{
		printf("O triangulo e isosceles (dois lados iguais e um diferente).");
		}
		
		return 0;
		
	}
