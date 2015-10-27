#include<stdio.h>
#include<stdlib.h>

int calificacion;

int main()
{
	printf("programa que te dice si aprobaste o no/n");
	printf("introduce la calificacion");
	scanf ("%d",&calificacion);
	printf("tu calificacion es: %d\n",calificacion);
	if(calificacion>= 7)
	{
		printf("aprobado\n");
	}
	else
	{
		printf("reprobado");
	}	
	system("pause");
		
}
