//10. Factorial de un numero.

#include<stdio.h>

int main () {
	int i,n,fact = 1;
	
	printf("Digite un numero: ");
	scanf("%i",&n);
	
	for( i=1; i<=n;i++){
		fact = fact * i;
	}
	printf("El factorial del numero dado es: %i",fact);
	
	return 0;
}
