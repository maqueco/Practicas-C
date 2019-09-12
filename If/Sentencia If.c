 /* La Sentencia if:
 
 	if (condicion)
 		Accion
*/

// Prueva de Divisibilidad

#include<stdio.h>

int main() {
	int a,b;
	
	printf("Escriba 2 numeros: ");
	scanf("%i %i",&a,&b);
	
	if(a % b == 0){
		printf("El numero %i es divisible entre %i",a,b);
	}
	
	return 0;
}

