#include <stdio.h>
int main()
{
	int a,b;
	printf("Ingrese dos numeros enterso ");
	scanf("%i %i",&a,&b);	
	if(a<=0 || b<=0)
	{
		printf("Solo valores enteros ");
		printf("Ingrese dos numeros enterso ");
		scanf("%i %i",&a,&b);	
	}
	else{
		  if(a>b)
		    {
		      if(a%b==0)
		    	{
				printf("%i Es multiplo de %i",a,b);
		    	}else 
		    	{
		    		printf("No son multiplos");
				}
		}else
		{
		   if(b%a==0)
			{
				printf("%i Es multiplo de %i",b,a);
			}else
			{
				printf("No son multiplos ");
			}
		}
		
		
	}

		
	
	return 0;
	
}