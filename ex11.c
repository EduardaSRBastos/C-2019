#include <stdio.h>
#include <stdlib.h>

void main()
	{
		int h,m;
		
		printf("Insira as horas: ");
		scanf("%d",&h);
		printf("Insira os minutos: ");
		scanf("%d",&m);
		
		if(h>23 ||m>59)
		{
			printf("Inseriu um valor invalido.\n\n");
		}
		else
		{
			if(h<12)
			{
				printf("Horas: %dh%d AM\n\n",h,m);
			}
			else
			{
				if (h==12)
				{
					printf("Horas: %dh%d PM\n\n",h,m);
				}
				else
				{
					h=h-12;
					printf("Horas: %dh%d PM\n\n",h,m);
				}
			}
		}
		
		system("pause");
		exit(0);
	}
