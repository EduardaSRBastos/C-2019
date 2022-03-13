#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void escrever()
{
	FILE* filept=NULL;
		char name[]="dados.txt";
		int i;
		
		filept=fopen(name,"w");
		if(filept==NULL) //ficheiro nao existe ou nao consegue abrir
		exit(0);
		
		for(i=0;i<1;i++)
		{
			fprintf(filept,"Olá Mundo!\n");
		}
		
		fclose(filept);
}

/*void ler()
{
		FILE *fileler=NULL;
		char name[]="dados.txt", lerv[100];
		
		fileler=fopen(name,"r");
		
		if(fileler==NULL) //ficheiro nao existe ou nao consegue abrir
		printf("Erro de abertura");
		while (fgets(lerv,sizeof lerv,fileler) != NULL) /* read a line *//*
      {
         fputs (lerv,stdout); /* write the line *//*
      }
		fclose(fileler);
}*/
int ler(int vidas)
{
		FILE *fileler=NULL;
		char name[]="backup.txt", lerv[120];
		fileler=fopen(name,"r");
		int count=0;
		if(fileler==NULL) //ficheiro nao existe ou nao consegue abrir
		printf("Erro de abertura");
	while (fgets(lerv,sizeof lerv,fileler) != NULL)
      {			
			if (count==3)
	        {
	        	sscanf(lerv, "%d", &vidas);
	        	return vidas;
	   		 }
	         count++;
		}
		fclose(fileler);
}
int main()
	{char bot[170];int vidas;
		//escrever();
		printf("%d",ler(vidas));
	}
