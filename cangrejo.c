#include<stdio.h>
#include<stdlib.h>

int noche;
int altura;
int i=0;
int suma=0;
int dia=0;
int sale;
  
int main ()

{
printf("programa que dice en cuantos dias sale el cangrejo\n");
printf("dame la altura de la cual cae\n");
scanf("%d",&altura);
printf("dime cuantos metros avanza\n");
scanf("%d",&dia);
printf("dime cuantos metros retrocede\n");
scanf("%d",&noche);
 
 if(dia>noche)
 {
 while(i<altura)
  {
   suma=suma+dia;
   
  
   i=suma;
   if(sale>=0)
   {
    sale=sale+1;             
   suma=suma-noche;
   }
   }
   printf("el cangrejo tarda en salir %d dias\n",sale);
   }
   else
   {                   
   printf("el cangrejo nunca sale\n");
   }
system ("pause");	
}
