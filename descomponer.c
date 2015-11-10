#include<stdio.h>
#include<stdlib.h>

int numero;
int res;

int main()
{
	printf("programa que descompone los numero\n");
	printf("dame el numero a descomponer");
	scanf("%d",&numero);
	do
	{
		res= numero%10;
		numero=numero/10;
		printf("el digito es %d\n",res);
		
	}while(numero!=0);
	
	system("pause");
}

