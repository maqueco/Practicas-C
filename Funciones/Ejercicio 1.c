//1. Determinar si un numero es par o no.

#include<stdio.h>
/*
int comprobar(int n);

int main () {
	int n;
	
	printf("Digite un numer: ");
	scanf("%i",&n);
	
	if(comprobar(n) == 0){
		printf("\n El numero es par");
	}
	else{
		printf("El numero es impar");
	}
	return 0;
}

int comprobar(int n){
	if(n%2==0){
		return 0;
	}
	else{
		return 1;
	}
} */
void comprobar(int n);

int main () {
	int n;
	
	printf("Digite un numero: ");
	scanf("%i",&n);
	
	comprobar(n);
	
	return 0;
}

void comprobar(int n){
	if(n%2==0){
		printf("\n El numero es par");
	}
	else{
		printf("\n El numero es impar");
	}
	
}
