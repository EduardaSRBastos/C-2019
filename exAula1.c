#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
	{ 
	int n;
	
	printf("Insira um numero inteiro: ");
	scanf("%d",&n);
	//fflush(stdin) - limpar entrada teclado
	
	if(n==0)
	{
		printf("\nInseriu o numero 0.\n\n");
	}
	else
	{
		printf("\nInseriu um numero diferente de 0: %d.\n\n",n);
	}
	
	system("pause");
	exit(0);
	}
