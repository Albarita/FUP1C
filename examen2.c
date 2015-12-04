#include<stdio.h>
#include<stdlib.h>

int vectora [10];
int vectorb [10];
int count;
int i;
int j;


int main ( )
{
    for(i=1;i<10;i++)
    {
    printf("ingresa el numero \n");
    scanf("%d",&vectora[i]);
    }
    
    for(j=0;j<10;j++)
    {
    vectorb[j]=j;
    printf("%d\n",vectorb[j]);
    }
    
    printf("el resultado de vectora por vectorb es...\n");
    for (i=1;i<=10;i++)
    {
    for (j=0;j<10;j++)
    		{
    			count=vectora[i]*vectorb[j];
				printf("%d\n",count);
				printf("\n");
    		}
		
    }
system("pause");
}

