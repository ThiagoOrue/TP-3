#include <stdio.h>
#include <string.h>


int x=0;
int y=0;
char cadena1[50], cadena2[50], cadena3[100];


void concatenar(char *cadena1, char *cadena2, char *cadena3);
void mostrar(char *cadena3);
int main()
{
	
	
	printf("Ingrese la primera cadena de caracteres: ");
	scanf(" %[^\n]%*c", cadena1);	
	
	printf("\nPrimera cadena: %s",cadena1);
	
	printf("\n\nIngrese la segunda cadena de caracteres: ");
	scanf(" %[^\n]%*c", cadena2);	
	
	printf("\nSegunda cadena: %s",cadena2);
	
	concatenar(cadena1,cadena2,cadena3);
	mostrar(cadena3);
}

    void concatenar(char *cadena1, char *cadena2, char *cadena3)
    {
    	for(x=0;x<strlen(cadena1);x++)
    	{
    	    *(cadena3 + x + y) = *(cadena1 + x);	
		}
		
		for(y=0;y<strlen(cadena2);y++)
    	{
    	    *(cadena3 + x + y) = *(cadena2 + y);	
		}
	}
	void mostrar(char *cadena3)
	{
		printf("\n\nTercera cadena: %s",cadena3);
	}
