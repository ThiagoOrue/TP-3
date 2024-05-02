#include <stdio.h>
int x=0, y=0;
void intercambio(int *a, int *b);
int main(){
	
	printf("ingrese el valor de x: ");
	scanf("%d",&x);
	printf("ingrese el valor de y: ");
	scanf("%d",&y);
	
	printf("ANTES: \nx=%d y=%d\n",x,y);
	intercambio(&x, &y);
    printf("AHORA: \nx=%d y=%d\n",x,y);
}
void intercambio(int *a, int *b){
	int aux=0;
	aux=*a;
	*a=*b;
	*b=aux;	
}
