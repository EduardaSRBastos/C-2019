#include <stdio.h>
#include <stdlib.h>

int main(void)
	{
		char n[20];
		float h,d,sb,sl,inss,irs;
		
		printf("Ficha de funcionario\n\n");
		printf("Insira o seu nome: ");
		gets(n);
		printf("Insira o numero de horas trabalhadas do funcionario: ");
		scanf("%f",&h);
		printf("Insira o numero de dependentes do funcionario: ");
		scanf("%f",&d);
	
		sb=(12*h)+(40*d); //salario bruto
		inss=(sb*0.085); //INSS
		irs=(sb*0.05); //IRS
		sl=sb-(inss+irs); //salario liquido
	
		printf("\nNome do funcionario: %s\n",n);
		printf("Salario bruto: %.2f euros.\n",sb);
		printf("Descontos para o INSS: %.2f euros.\n",inss);
		printf("Descontos para o IRS: %.2f euros.\n",irs);
		printf("Salario liquido: %.2f euros.\n",sl);
		
		system("pause");
		exit(0);
		
		
	}
