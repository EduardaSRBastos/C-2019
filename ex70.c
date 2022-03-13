#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define NOME (120+1)
typedef struct alunos
{
	char nome[NOME];
	int num;
	float nota;
}aluno;

void carregar()
{
	FILE *fileler=NULL;
	char nome[]="alunos.txt",lerv[100];
	
	fileler=fopen(nome,"r");
	if(fileler==NULL)
	printf("Erro de abertura.\n");
	do
	{
		fscanf(fileler,"%[^\n]s",lerv);
	}while(EOF);
	fclose(fileler);
	printf("%s",lerv);
}
void guardar(int *tam,aluno *alunos)
{
	FILE *fileguardar=NULL;
	char nome[]="alunos.txt";
	int i;
	fileguardar=fopen(nome,"a");
	if(fileguardar==NULL)
	{
	printf("Erro de abertura.\n");
	exit(0);
	}
	for(i=0;i<1;i++)
	{
		fprintf(fileguardar,"%d # %[^\n]s\n",tam,alunos[i].num,alunos[i].nome);
	}
	fclose(fileguardar);
}
int main()
{
	setlocale(LC_ALL,"");
	int opcao=0;
	int num,*tam;
	
	printf("Insira o numero de alunos existentes, atualmente: ");
	scanf("%d",&num);
	tam=malloc(num*sizeof(int));
	aluno alunos[*tam];
	printf("Escolha a opção(nº): \n\n");
	do
	{
	printf("1- Carregar a lista de alunos.\n");
	printf("2- Guardar a lista de alunos.\n");
	printf("3- Acrescentar um aluno à lista.\n");
	printf("4- Eliminar um aluno da lista.\n");
	printf("5- Atribuir as notas aos alunos.\n");
	printf("6- Produzir uma pauta com os dados completos dos alunos.\n");
	printf("7- Apresentar a pauta de avaliação, ordem alfabética do nome.\n");
	printf("8- Sair do programa.\n");
	scanf("%d",&opcao);
	if(opcao<1 && opcao>8)
	printf("Inseriu um valor errado.\n");
	}while(opcao ==8);
	switch (opcao)
	{
		case 1:
			carregar();
			break;
		case 2:
			guardar(tam,alunos);
			break;
		case 3:
			
		case 4:
		
		case 5:
			
		case 6:
			
		case 7:
			
		case 8:
			exit(0);
			free(tam);
	}
	
}

