#include<stdio.h>
#include<stdlib.h>

char c;
int i;
char cadena [50];

int main ()
{
	c='\0';
	i= 0;
	while (c!='\n')
	{
		scanf("%c",&c);
		cadena[i]=c;
		i++;
	}
	cadena [i]='\0';
	printf("%s\n",cadena);
	
	system("pause");
}
