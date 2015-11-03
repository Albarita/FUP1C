#include<stdio.h>
#include<stdlib.h>

int n1,n2,n3,cont,;
float total;
int main ()
{
    cont=1;
    n3=0;
    total=0;
    while(cont<=5)
    {
     printf ("escribe un numero:\n");
     scanf ("%d", &n1);
     printf ("escribe un numero:\n");
     scanf ("%d", &n2);
     n3=n1+n2;
     total=n3+total;
     cont=cont+1;
     }
     total=total/10;
     printf("su promedio es: %.1f\n", total);
     
     system ("pause");
}
