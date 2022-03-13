#include <stdio.h>
#include <stdlib.h>

int main()
	{
		char nome[20]="";
		int i=0;
		
		for(i=1; i<=20;i++)
		{
		printf("Digite o %do nome: ",i);
		scanf("%s",&nome);
		printf("Nome: %s.\n\n",nome);	
		} 
		
		return 0;
	}
