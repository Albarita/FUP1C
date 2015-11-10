#include<stdio.h>
#include<stdlib.h>


int inicio;
int fin;
int i;

int main ()
{
	printf("programa que muestra el rango\n");
	printf("dame un numero\n");
	scanf("%d",&inicio);
	printf("dame otro numero\n");
	printf("%d",&fin);
	
	if(inicio>fin)
	{
		i = fin;
		while(i >= inicio)
		{
	
		printf("%d\n",i);
		i--;
		}
	}
	else
	{
		i = inicio;
		while(i<=fin)
		{
			printf("%d\n",i);
			i++;
		}
	}
		system ("pause");
	
}
