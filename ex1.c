#include <stdio.h>
#include <stdlib.h>

int main(void)
	{
	int x,y,z;
	printf("Soma de dois numeros\n\n");
	//pedir dois numeros ao utilizador
	printf("Insira o primeiro numero inteiro: ");
	scanf("%d", &x);
	printf("Insira o segundo numero inteiro: ");
	scanf("%d", &y);
	//adicionar os dois valores
	z=x+y;
	//mostrar o resultado
	printf("\n%d + %d = %d\n\n", x, y, z);
	
	system("pause"); //pedir ao sistema para parar antes de fechar
	exit(0);
	}	
