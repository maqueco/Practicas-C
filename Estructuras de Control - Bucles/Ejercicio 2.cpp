/* Problema 2: 
	Digite un numero, si el numero supera a 10,
multipique los 10 primero numeros, sino, sumelos.*/

#include<stdio.h>

int main(){
	
	int i = 1, suma=0, mult=1, n;
	
	printf("Digite un numero: ");
	scanf("%i",&n);
	
	if(n > 10){
		while( i <= 10 ){
			mult = mult * i;
			i++;
		}
		printf("El numero multiplicado es: %i",mult);
	}
	else {
		while( i <= n ){
			suma = suma + i;
			i++;
		}
		printf("El numero sumado es: %i",suma);
	}
	return 0;
}
