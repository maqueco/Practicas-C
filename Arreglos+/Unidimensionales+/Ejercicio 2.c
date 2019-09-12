/*Problema 2: Crear un programa que tenga un array de
100 numeros aleatorios entre 1 y 1000. Una vez creado
organizarlo de tal manera que almacene los numero pares
en un array y los impares en otro. */

#include<stdio.h>
#include<conio.h>
#include<time.h>

void pares(int a[100]);
void impares(int a[100]);

int main(){
	int i,array[100];
	
	srand(time(NULL));
	for(i=0;i<100;i++){
	array[i] = 1 + rand() % 1000;
	}
	printf("Array con numeros pares: ");
	pares(array);
	printf("\nArray con numeros impares: ");
	impares(array);
	
	getch();
	return 0;
}

void pares(int a[100]){
	int i;
	
	for(i<0;i<100;i++){
		if (a[i] % 2 == 0){
			printf("%i,",a[i]);
		}
	}
}

void impares(int a[100]){
	int i;
	
	for(i=0;i<100;i++){
		if(a[i] % 2 != 0){
			printf("%i,",a[i]);
		}
	}
}
