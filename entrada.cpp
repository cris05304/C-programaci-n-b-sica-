#include <stdio.h>
#define TAM_MAXIMO 80
int main(void)
{
	int n,i,r;
	i=0;
	printf("Ingrese un numero ");
	scanf("%i",&n);
	while(n>0)
	{
		r=n%10;
		i=(i*10)+r;
		n=n/10;
	}
	printf("Numero invertido %i",i);
	
	
	
	/*int a,b,c;
	printf("Ingrese dos numeros ");
	scanf("%i %i",&a,&b);
	c=a+b;
	printf("%i+%i=%i",a,b,c);
	*/
	/*char cadena[TAM_MAXIMO];
	int x,y;
	float z;
	printf("Inttrodusca dos numeros enteros separados por un espacio ");
	scanf("%d %d",&x,&y);
	printf("Introdusca una cadena ");
	scanf("%s",&cadena);
	printf("Usted introdujo");
	printf("%d %d\t%.3f\t%s\n",x,y,z,cadena);*/
	
	
}