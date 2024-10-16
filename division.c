#include <stdio.h>
int main()
{
	int a,b;
	float c;
	printf("Ingrese dos numeros enteros separados por un espacio ");
	scanf("%i %i",&a,&b);
	c=a%b;
	if(c==0)
	{
		printf("La division es exacta");
	}else
	{
		printf("La division no es exacta");
	}
}