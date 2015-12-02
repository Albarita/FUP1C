#include<stdio.h>
#include<stdlib.h>

int var1=0;
int var2=1;
int count=0;
int i;
int fin;

int main ()
{
    printf("hasta que numero quieres llegar\n");
    scanf("%d" ,&fin);
    
    printf("%d\n" ,var1);
    for(i=0;i<=fin;i++)
    {
      var1=var2;
      var2=count;
      count=var1+var2;
      printf("%d\n",count);
    }
    system("pause");
}

