#include <stdio.h>
int vec[0];
int x=0;
void ocurrencias(int *vec, int n);

int main()
{
	int dim=0;
	printf("Ingrese la dimension del vector: ");
	scanf("%d",&dim);
	
	int vec[dim];
	
	for(x=0;x<dim;x++)
	{
		printf("Ingrese el valor %d del vector: ",x+1);
		scanf("%d",&vec[x]);
	}
	 
	 ocurrencias(vec,dim);

}
    void ocurrencias(int *vec, int n)
    {
    	int ocurrencia=0;
    	for(x=0;x<n;x++)
    	{
    		if(*(vec + x)==*(vec + x + 1))
    		{
    			ocurrencia++;
			}
		}
		printf("\n La cantidad de ocurrencias son: %d",ocurrencia);
	}

