#include<stdio.h> 
#include<stdlib.h>

int edad;

int main()
{
	printf("programa que te dice si eres bebe niño adolescente joven adulto o adulto mayor\n");
	printf("introduce tu edad ");
	scanf ("%d",&edad);
	
	if (edad<= 2)
    {
		printf("eres bebe\n");
	}
	else
		if (edad<= 12)
	    {
			printf("eres niño\n");
		}
		else
			if (edad<= 18)
			{
				printf("adolescente\n");
			}
			  else
			      if (edad <= 29)
			      {
                           printf("joven\n");
                  }
                           else
                           if (edad <= 59)
                  {
                           printf ("adulto\n");
                  }
                                  else 
                                  if (edad >= 60)
                  {
                                  printf ("adulto mayor\n");
                  }
	system("pause");
}


