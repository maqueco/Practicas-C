// 5. Sumar 1-2+3-4....

/*
impares (+)
pares (-)

suma_pares
suma_impares

suma = suma_pares + suma_impares

*/
#include<stdio.h>

int main () {
	int sum_par=0,sum_impar=0,i = 0,suma=0,n,ne;
	
	printf("Digite el total de elementos a sumar: ");
	scanf("%i",&n);
	
	while( i <= n ) {
		if(i%2==0){
			ne = i * (-1);
			sum_par += ne;	
		}
		else {
			sum_impar += i;
		}
		i++;
	}
	suma = sum_par + sum_impar;
	printf("La suma total es: %i",suma);
	return 0;
}
