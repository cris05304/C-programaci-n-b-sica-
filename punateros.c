#include<stdio.h>

int menu()
{
	int opc;
	printf("Menu\n{1}Suma\n{2}Podencia\n{3}Intercambio");
	scanf("%i",&opc);
	return opc;
}
int suma(int a,int b){
	return a+b;
}
int potencia(int a)
{
	return a*a;
}
void intercambioR(int *a,int *b)
{
	int c=*a;
	*a=*b;
	*b=c;
	
}
int leer()
{
	int a,b;
	printf("Ingresa un numero ");
	scanf("%i",&a);
	return a;
}
int main(void)
{
	int opc=menu();
	int a,b;
	switch(opc)
	{
		case 1:
			a=leer();
			b=leer();
			printf("La suma es %i %i",suma(a,b));
			break;
		case 2:
			a=leer();
			printf("La potencia es %i",potencia(a));
			break;
		case 3:
			a=leer();
			b=leer();
			printf("Valores no intercambiados %i,%i",a,b);
			intercambioR(&a,&b);
			printf("\nvalores intercambiados %i ,%i",a,b);
			break;
		default:
			printf("Opcion inexistente");
			
	}
	
	return 0;
}