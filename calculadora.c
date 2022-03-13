#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
	{
		float num1, num2,total;
		char op;
		
		printf("Calculadora:\n\n");
		printf("Insira o primeiro numero: ");
		scanf("%f",&num1);
		printf("Insira o segundo numero: ");
		scanf("%f",&num2);
		fflush(stdin);
		printf("Insira o operador: ");
		scanf("%c",&op);
		
		switch(op)
		{
			case '+':
			total=num1+num2;
			break;
			case '-':
			total=num1-num2;
			break;
			case '*':
			case 'x':
			case 'X':
			total=num1*num2;
			break;
			case '/':
			case ':':
				if(num2==0)
				{
					printf("Impossivel dividir por 0.");
					return 0;
				}
				else
				total=num1/num2;
			break;
			default:
			printf("Inseriu um operador invalido.");
			return 0;
		}
		printf("%.2f %c %.2f = %.2f",num1,op,num2,total);
		return 0;
	}
