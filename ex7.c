#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
	{
		char n[30];
		float f,i,r,t;
		
		printf("Insira o nome do automovel: ");
		gets(n);
		printf("Insira o preco de fabrica: ");
		scanf("%f",&f);
		i=f*0.45; //preco do imposto
		r=f*0.28; //valor do revendedor
		t=f+i+r;
		printf("Preco final - %s: %.2f euros.",n,t);
		
		return(0);
	}
