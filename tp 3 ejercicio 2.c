#include <stdio.h>

int x=0;
int cant=1;
int vecsuma[1];
void sumapromedio(int *vecsuma);

int main()
{
	
printf("ingrese la cantidad de numeros que ingresara: ");
scanf("%d",&cant);	


	for(x=0;x<cant;x++)
	{
		printf("ingrese el numero %d: ",x+1);
		scanf("%d",&vecsuma[x]);
	}
    	sumapromedio(vecsuma);
    	
   
}
void sumapromedio(int *vecsuma)
{

 int total=0;
 float promedio=0;
	for(x=0;x<cant;x++)
	{
		total+=vecsuma[x];
	}
	printf("suma total: %d",total);
	promedio = total / cant;
	printf("\npromedio: %f",promedio);
}



