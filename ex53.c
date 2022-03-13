#include <stdio.h>

int main() //ordenar por SELEÇÃO
{
	int vet[5],i,j,m,n,min,aux;
	
	for(i=0;i<5;i++)
	{
		printf("Insira um numero para a posicao %d: ",i);
		scanf("%d",&vet[i]);
	}
	
	for(m=0;m<5-1;m++)
	{
		min=m;
		for(n=m+1;n<5;n++)
		{
			if(vet[n]<vet[min])	
			min=n;
		}
		aux=vet[m];
		vet[m]=vet[min];
		vet[min]=aux;
	}
	printf("Vetor ordenado:\n");
	for(j=0;j<5;j++)
	{
		printf(" %d ",vet[j]);
	}
}
