#include <stdio.h>

int main()
	{
		char string[80],sigla[80];
		int i,j=2;
		
		printf("Insira a(s) palavra(s): ");
		scanf("%[^\n]s",string);
		
		sigla[0]=string[0];
		sigla[1]='.';
		for(i=1;string[i]!='\0';i++)
		{
			if(string[i]==' ' && string[i+1]!=' ')
			{
				sigla[j]=string[i+1];
				j++;
				sigla[j]='.';
				j++;
			}
		}
		printf("%s",sigla);
	
		return 0;
	}
