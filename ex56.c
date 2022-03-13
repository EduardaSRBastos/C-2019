#include <stdio.h>
#include <time.h>
#include <locale.h>

int main() //pesquisa binária
{
	int num,pos=-1,vet[500],inf=0,sup=499,meio,l;
	setlocale(LC_ALL, "");	
	srand(time(NULL));
	
	for(l=0;l<500;l++)
	{
	vet[l]=	rand()%100+1;
	}
	printf("Insira o valor que deseja procurar (entre 1 e 100): ");
	scanf("%d",&num);
	while(inf<=sup)
	{
		meio=(inf+sup)/2;
		if(num==vet[meio])
		{pos=meio;
		break;
		}
		else if(num<vet[meio])
		{sup=meio-1;
		continue;
		}
		else if(num>vet[meio])
		{inf=meio+1;
		continue;
		}
	}
	if(pos==-1)
	printf("O valor %d não existe no vetor.",num);
	else
	printf("O valor %d está na posição %d.",num,pos);
}
