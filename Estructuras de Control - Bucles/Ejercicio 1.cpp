// 1. Suma de los n primeros números

#include<stdio.h>

int main(){
	int i = 1, n, suma=0;
	
	printf("Digite el total de numeros a sumar: ");
	scanf("%i",&n);
	
	while(i <= n){
		suma = suma + i;
		i++;
	}
	printf("La suma de los %i primeros numeros es: %i",n,suma);
	return 0;
}
