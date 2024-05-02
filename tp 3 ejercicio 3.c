#include <stdio.h>
int vec[0];
int max=0,min=0;
int x=0;


void minmax(int *vec, int n, int *max, int *min);


int main()
{
	int dim=0;
	printf("Ingrese la dimension del vector: ");
	scanf("%d",&dim);
	vec[dim];
	for(x=0;x<dim;x++)
	{
		printf("Ingrese el valor %d del vector: ",x+1);
		scanf("%d",&vec[x]);
	}
	minmax(vec,dim,&max,&min);
}

void minmax(int *vec, int n,int *max, int *min){
	*min = vec[0];  
    *max = vec[0]; 
	for(x=0;x<n;x++)
	{
		if(*(vec+x)>*max)
		{
			*max=*(vec+x);
		}
		if(*(vec+x)<*min) 
		{
			*min=*(vec+x);
		}
	}
	
	printf("\n El valor minimo ingresado fue: %d ",*min);
	printf("\n El valor maximo ingresado fue: %d ",*max);
	
}
