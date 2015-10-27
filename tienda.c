#include<stdio.h>
#include<stdlib.h>

int n1;
int n2;
int n3;
int n4;
int n5;
int n6;
int n7;
int total;
int si;
int ganancia;

int main()

{
	printf ("programa que da productos y dice las ganancias\n");
	printf ("si desea comprar pesiona 1\n si desea ver las ganancias presiona 2\n");
	scanf ("%d",& n1);
	if (n1==1)
	{
		printf ("menu de productos\n");
		printf("1jugo 8 \n2 papas 10 \n3 jabon 12 \n4 sopa 5 \n5 coca 20\n");
		printf ("indique el producto que desea\n");
		scanf ("%d", &n2);
		switch (n2)
		{
           case 1:{
                	printf ("indique cuantos productos desea\n");
                 	scanf ("%d", &n3);
                  	total = n3*8;
                  	printf ("el total es: %d\n",total);
                  	printf ("¿desea ver las ganancias con el total? \n si presione 1 \n no presione 2\n");
                  	scanf ("%d", &si);
                  	if (si==1)
                  	{
                           ganancia=0+total;
                           printf ("la ganancia con el total es: %d\n",ganancia);
                    }
                  	break;
                   	}
            case 2:{
                	printf ("indique cuantos productos desea\n");
                 	scanf ("%d", &n4);
                  	total = n4*10;
                  	printf ("el total es: %d\n",total);
                  	printf ("¿desea ver las ganancias con el total? \n si presione 1 \n no presione 2\n");
                  	scanf ("%d", &si);
                  	if (si==1)
                  	{
                           ganancia=0+total;
                           printf ("la ganancia con el total es: %d\n",ganancia);
                    }
                  	break;
                   	}
           	 case 3:{
                	printf ("indique cuantos productos desea\n");
                 	scanf ("%d", &n5);
                  	total = n5*12;
                  	printf ("el total es: %d\n",total);
                  	printf ("¿desea ver las ganancias con el total? \n si presione 1 \n no presione 2\n");
                  	scanf ("%d", &si);
                  	if (si==1)
                  	{
                           ganancia=0+total;
                           printf ("la ganancia con el total es: %d\n",ganancia);
                    }
                  	break;
                   	}
            case 4:{
                	printf ("indique cuantos productos desea\n");
                 	scanf ("%d", &n6);
                  	total = n6*5;
                  	printf ("el total es: %d\n",total);
                  	printf ("¿desea ver las ganancias con el total? \n si presione 1 \n no presione 2\n");
                  	scanf ("%d", &si);
                  	if (si==1)
                  	{
                           ganancia=0+total;
                           printf ("la ganancia con el total es: %d\n",ganancia);
                    }
                  	break;
                   	}
            case 5:{
                	printf ("indique cuantos productos desea\n");
                 	scanf ("%d", &n7);
                  	total = n7*20;
                  	printf ("el total es: %d\n",total);
                  	printf ("¿desea ver las ganancias con el total? \n si presione 1 \n no presione 2\n");
                  	scanf ("%d", &si);
                  	if (si==1)
                  	{
                           ganancia=0+total;
                           printf ("la ganancia con el total es: %d\n",ganancia);
                    }
                  	break;
                   	}
                
                   		default:{
                   			printf("el numero no es permitido");
							break;
						   }
		}
	}
	else
	{
		if(n1==2)
		{
		printf ("la ganancia es: %d\n",ganancia);
		}
		else
		{
			printf ("no se permite ese numero\n");
		}
	}
	
	system("pause");

} 
 


