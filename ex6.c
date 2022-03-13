#include <stdio.h>
#include <stdlib.h>

int main(void)
	{
		char n[20];
		
		printf("Insira o seu nome: ");
		gets(n);
		//fgets(n,sizeof(n),stdin);
		printf("Escreveu: %s\n\n",n);
		
		return(0);
	}
