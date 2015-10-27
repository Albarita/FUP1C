#include<stdio.h> //Libreria de E/S

int n1;
int n2;
int suma;
int resta;
int mul;
float div;

int main ()
{//inicio
		printf("Dame un numero: ");
		scanf("%d",&n1);	
		printf("Dame un numero: ");
		scanf("%d",&n2);
		suma = n1 + n2;
		resta = n1 - n2;
		mul = n1 * n2;
		div=(float)n1/n2;
		printf("el resultado de: %d + %d es: %d\n" , n1,n2,suma);
		printf("el resultado de: %d - %d es: %d\n" , n1,n2,resta);
		printf("el resultado de: %d * %d es: %d\n" , n1,n2,mul);
		printf("el resultado de: %d / %d es: %.1f\n" , n1,n2,div);
		
		
}//fin

