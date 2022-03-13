#include <stdio.h>
#include<locale.h>

struct _Ponto
{
	float x,y;
};

typedef struct _Ponto Ponto;

int pointcmp(Ponto * pontos)
{
	if((pontos[0].x==pontos[1].x) && (pontos[0].y==pontos[1].y))
		return 0;
	else
		return -1;
}
int main()
{
	setlocale(LC_ALL, ""); //é,ã
	//ponto a e b, e dps comparar se sao iguais
	
	Ponto p[2];
	
	printf("Inserir coordenadas: x y\n");
	printf("Ponto coordernada(x e y) de A: ");
	scanf("%f %f",&p[0].x,&p[0].y);
	
	printf("Ponto coordernada(x e y) de B: ");
	scanf("%f %f",&p[1].x,&p[1].y);
	
	if(pointcmp(p)==0)
		printf("\nOs pontos A e B são iguais: [%.2f; %.2f].\n",p[0].x,p[0].y);
	else if(pointcmp(p)==-1)
		printf("\nO ponto A=[%.2f; %.2f] é diferente do ponto B=[%.2f; %.2f].\n",p[0].x,p[0].y,p[1].x,p[1].y);
	else
		printf("\nValores errados.\n");
	return 0;
}
