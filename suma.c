#include<stdio.h>
#include<stdlib.h>

int final;
int i;
int suma;
int main()

{
	printf("ingrese hasta que número quiere sumar\n");
	scanf ("%d",& final);
	i=1;
	suma=0;
	while (i<=final)
	{
		suma=suma+i;
		i=i+1;
	}
	printf("%d\n",suma);


system("pause");
}
