#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
	{
		int nota;
		
		printf("Insira o valor da nota: ");
		scanf("%d",&nota);
		
		if(nota<=0 || nota<5)
		{
			printf("O valor %d e pessimo!\n\n",nota);
		}
		else if(nota<=5 || nota<8)
		{
			printf("O valor %d e mau!\n\n",nota);
		}
		else if(nota<=8 || nota<10)
		{
			printf("O valor %d e insuficiente!\n\n",nota);
		}
		else if(nota<=10 || nota<12)
		{
			printf("O valor %d e suficiente!\n\n",nota);
		}
		else if(nota<=12 || nota<16)
		{
			printf("O valor %d e bom!\n\n",nota);
		}
				else if(nota<=16 || nota<=20)
		{
			printf("O valor %d e excelente!\n\n",nota);
		}
		else
		printf("O valor %d e invalido!\n\n",nota);
		
		return 0;
	}
