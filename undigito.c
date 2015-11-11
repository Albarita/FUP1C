#include<stdio.h>

int numero;
int res;
int digitodeseado;
int i;

int main()
{
	
	printf("proframa que da el digitodeseado\n");
	printf("dame el numero que quieres descomponer\n");
	scanf("%d",&numero);
	printf("que digito desea\n");
	scanf("%d",&digitodeseado);
	i=1;
	do
	{
		res=numero%10;
		numero=numero/10;
		if(i == (4-digitodeseado+1))
		{
		printf("el digito es: %d\n",res);
		
		}
		i++;
	}while(numero !=0);
	
	system ("pause");
	
}
