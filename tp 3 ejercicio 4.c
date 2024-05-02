#include <stdio.h>
int vec[0];
int vec2[0];
int x=0;
void copiarymostrar(int *vec, int n,int *vec2);

int main()
{
	int dim=0;
	printf("Ingrese la dimension del vector: ");
	scanf("%d",&dim);
	
	int vec[dim];
	int vec2[dim];
	
	for(x=0;x<dim;x++)
	{
		printf("Ingrese el valor %d del vector: ",x+1);
		scanf("%d",&vec[x]);
	}
	

	
	copiarymostrar(vec, dim, vec2);
}

void copiarymostrar(int *vec, int n,int *vec2)
{
	for(x=0;x<n;x++)
	{
		*(vec2 + x) = *(vec + x);
	}
	
	for(x=0;x<n;x++)
	{
		printf("%d ",*(vec2 + x));
	}
}
