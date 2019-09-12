/*1. Pedir 2  numeros al usuario y sumarlo, restarlos, multiplicarlos y dividirlos.*/

#include<stdio.h>

int main (){
	
	int a,b;
	int suma = 0;
	int resta=0;
	int mult =0;
	int div=0;
	
	/*printf("Escribri el primer numer: ");
	scanf("%i",&a);
	
	printf("Escriba el segundo numero: ");
	scanf("%i",&b);*/
	
	printf("Escriba los dos numeros: ");
	scanf("%i %i",&a,&b);
	
	suma = a + b;
	resta = a - b;
	mult = a * b;
	div = a / b;
	
	printf("La suma es: %i\n",suma);
	printf("La resta es: %i\n",resta);
	printf("La multplicaciones: %i\n",mult);
	printf("La divicion es: %i\n",div);
	
	return 0;
}
