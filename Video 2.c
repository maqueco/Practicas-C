//Directivas del PreProcesador y Variables

#include<stdio.h>//Libreria

#define PI 3.1416//Macro

int y=5;//Varible Global

int main(){
	int x = 10;//Variabl local
	
	float suma = 0;
	
	suma = PI + x;
	
	printf("La suma es: %.3f",suma);
	
	return 0;
}





