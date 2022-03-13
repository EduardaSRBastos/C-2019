#include <stdio.h>
#include <math.h>

int main()
	{
		float km,milha;
		
		printf("Converter km em Milhas:\n\n"); //1milha=1.609km
		printf("Insira o numero de km: ");
		scanf("%f",&km);
		
		if(km>5000)
		{
			printf("Inseriu um valor demasiado grande. Muito longe.");
		}
		else
		{
			milha=km/1.609;
			printf("&fkm = &fMilhas.",km,milha);	
		}
		
		return 0;
	}
