/* Recursividad: Una funcion recursiva es una funcion se llama a
si misma.
	1. Caso Base.
	2. Caso Recursivo.
	
	a(x){
	if(n=1){
		return n;
	}
	else{
		a(x-*);
	}
	
*/

//Factorial

#include<stdio.h>
long factorial(int n);


int main(){
	int numero;
	
	printf("Digite un numero: ");
	scanf("%i",&numero);
	
	printf("\nEl factorial del numero es: %li",factorial(numero));
	return 0;
}

long factorial(int n){
	if (n<=1){
		return n;
	}
	else{
		return (n*factorial(n-1));
	}
}
