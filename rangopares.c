#include<stdio.h>
#include<stdlib.h>

int i;
int j;
int final;
int main ()

{
	printf("programa que muestra rango de numero pares\n");
	printf("dame un numero\n");
	scanf("%d",&final);
	while(i<=final)
	{	j=1;
		do
		{
		printf("%d\n",i);
		j++;
	
	}while((j<=i)&&(i%2==0));
	printf("\n");
	i++;
	}
	system ("pause");
}
