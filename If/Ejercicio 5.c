/*5. Calcular el mayor de dos numeros leidos del tecaldo y visualizar en pantalla. */

#include<stdio.h>

int main(){
	int a,b;
	
	printf("Escriba dos numeros: ");
	scanf("%i %i",&a,&b);
	
	if(a > b){
		printf("\nEl mayor es: %i",a);
	}
	else if(b > a){
		printf("\nEl mayor es: %i",b);
	}
	else printf("\nAmbos numeros son iguales");
	
	return 0;
}
