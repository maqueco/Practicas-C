// 7. Suma de los 10 primeros numeros pares
/*
#include<stdio.h>

int main () {
	
	int i,suma =0;
	
	for( i=1 ; i<=10 ; i++ ){
		if(i%2==0){
			suma = suma + i;
		}
	}
	printf("La suma de los numeros pares es: %i",suma);
	return 0;
} */
#include<stdio.h>

int main () {
	
	int i,suma =0;
	
	for( i=0 ; i<=10 ; i+=2 ){
		suma = suma + i;
	}
	printf("La suma de los numeros pares es: %i",suma);
	return 0;
}
