#include <stdio.h>
#include <stdlib.h>

int kilos;
int tipo;

int main ()
{
	printf("introdusca los kilos de ropa\n");
	scanf("%d", &kilos);
	printf("los kilos son: %d\n", kilos);
	if (kilos >= 0 && kilos<= 10)
	{
		printf("El nivel de agua es minimo\n");
	}
	if (kilos >= 11 && kilos<= 15)
	{
		printf("el nivel de agua es medio\n");
	}
	if (kilos >= 16 && kilos<= 20)
	{
		printf("El nivel de agua es maximo\n");
	}
	if (kilos >= 20)
	{
		printf("no lava");
	}
	
	printf("tipo de ropa\n sucia presione 1\n normal presione 2\n sucia presione3\n");
	scanf("%d", tipo);
	printf("el tipo de ropa es: %d\n ropa");
	
	
	if(tipo==1)
			printf("ropa delicada se lava en 5 min");
	if(tipo==2)
			printf("ropa normal se lava 10 minutos");
	if(tipo==3)
			printf("ropa sucia se lava 20 minutos");
		
		system("pause");
}
