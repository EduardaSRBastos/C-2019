#include <stdio.h>
#include <time.h>
#include <locale.h>

int main() //pesquisa linear
{
	setlocale(LC_ALL, "");
	int vet[500],aux,l,num,k,pos=-1;
	
	srand(time(NULL));
	for(l=0;l<500;l++)
	{
	vet[l]=	rand()%100+1;
	}
	
	printf("Insira o valor que deseja procurar: (entre 1 e 100) ");
	scanf("%d",&num);
	for(k=0;k<500;k++)
	{
		if(num==vet[k])
		pos=k;
	}
	if(pos==-1)
	printf("O valor %d não existe no vetor.",num);
	else
	printf("O valor %d está na posição %d.",num,pos);
}
