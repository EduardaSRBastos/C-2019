#include <stdio.h>
#include <locale.h>

#define NOME (120+1)

struct _Aluno
{
	int nr;
	char nome[NOME];
};
typedef struct _Aluno Aluno;

void ReadAlunos(Aluno *alunos, int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Aluno %d- numero: ",i);
		scanf("%d",alunos[i].nr);
		printf("Aluno %d- nome: ",i);
		fflush(stdin);
		scanf("%[^\n]s",alunos[i].nome);
	}
	printf("\n");
}

void ShowPauta(Aluno *alunos, int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Aluno - Numero: %d.\n",alunos[i].nr);
		printf("Aluno - Nome: %s.\n",alunos[i].nome);
	}
}
int main()
{
	int ALUNOS=2;
	//aluno:nome e nr
	Aluno alunos[ALUNOS];
	ReadAlunos(alunos,ALUNOS);
	ShowPauta(alunos, ALUNOS);
	
	return 0;
}
