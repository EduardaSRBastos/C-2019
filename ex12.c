#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
	{
		float byte,convert;
		
		
		printf("Converter Bytes:\n\n");
		printf("Insira um valor: ");
		scanf("%f",&byte);
		
		/* 1KB=1024B=2^10
		   1MB=1024KB=1048576B
		   1GB=1024MB=1073741824B
		   1TB=1024GB=1099511627776B
		*/
		
		if(byte<=1023)
		{
			printf("%.0fB = %.2fB\n\n",byte,byte);
		}
		else if(byte>=1024 && byte <=1048575)
		{
			convert=byte/pow(2,10);
			printf("%.0fB = %.2fKB\n\n",byte,convert);
		}
		else if(byte>=1048576 && byte <=1073741823)
		{
			convert=byte/pow(2,20);
			printf("%.0fB = %.2fMB\n\n",byte,convert);
		}
		else if(byte>=1073741824 && byte <=1099511627775)
		{
			convert=byte/pow(2,30);
			printf("%.0fB = %.2fGB\n\n",byte,convert);
		}
		else if(byte>=1099511627776)
		{
			convert=byte/pow(2,40);
			printf("%.0fB = %.2fTB\n\n",byte,convert);
		}
		
		
		system("pause");
		exit(0);
			
	}
