#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() //ordenar por BOLHA
{
	setlocale(LC_ALL, "");
	int vet[5],i,j,aux,k,l,m,n,t,p;
	char nome[5][10],aux2[5][10];
	for(l=0;l<5;l++)
	{
		printf("Insira um numero para a posicao %d: ",l);
		scanf("%d",&vet[l]);
	}
	for(m=0;m<5;m++)
	{
		printf("Insira um nome para a posicao %d: ",m);
		scanf("%s",&nome[m]);
	}
	for(n=0;n<5;n++)
	{
		for(t=n+1;t<5;t++)
		{
			if(strcmp(nome[t],nome[n])<0)
			{
				strcpy(aux2[t],nome[n]);
				strcpy(nome[n],nome[t]);
				strcpy(nome[t],aux2[t]);
			}
		}
	}
		for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(vet[j]<vet[i])
			{
				aux=vet[i];
				vet[i]=vet[j];
				vet[j]=aux;
			}
		}
	}
	printf("Vetor ordenado dos números:\n");
	for(k=0;k<5;k++)
	{
		printf("%d ",vet[k]);
	}
	printf("\nVetor ordenado dos nomes:\n");
	for(p=0;p<5;p++)
	{
		printf("%s ",nome[p]);
	}
}
