#include <stdio.h>
#include <locale.h>

void limpa_vetor(float *num, int tamanho)
{
	int i;
	for(i=0;i<tamanho;i++)
	{
		num[i]=0;
		printf("%.2f ",num[i]);
	}
}
int main()
{
	setlocale(LC_ALL, "");
	int i,j,tam;
	float vetor[tam];
	printf("Insira a dimensão do vetor: ");
	scanf("%d",&tam);
	for(i=0;i<tam;i++)
	{
		printf("Insira o valor para a posição %d: ",i);
		scanf("%f",&vetor[i]);
	}
	printf("Vetor inserido: \n");
	for(j=0;j<tam;j++)
	{
		printf("%.2f ",vetor[j]);
	}
	printf("\n\nVetor limpo: \n");
	limpa_vetor(vetor,tam);
}
