#include <stdio.h>
#include <locale.h>
//#include <conio.h>

int main()
{
	setlocale(LC_ALL, "");
	int tam,*vet,i;
	printf("Insira o tamanho do vetor: ");
	scanf("%d",&tam);
	vet=malloc(tam*sizeof(int));
	for(i=0;i<tam;i++)
	{
		printf("Insira o valor para a posição %d: ",i);
		scanf("%d",&vet[i]);
	}
	printf("Valores do vetor dinâmico: \n");
	for(i=0;i<tam;i++)
	{
		printf("%d ",vet[i]);
	}
	free(vet);
}
