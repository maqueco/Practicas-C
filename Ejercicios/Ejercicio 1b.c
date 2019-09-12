//Convertir Grados Celsius a Grados Fahrenheit

#include<stdio.h>

int main(){
	
	float a;
	float formula;

	printf("Grados Celsius:");
	scanf("%f",&a);
	formula = (a * 9/5) + 32;
	printf("Igual a Grados Fahrenheit: %.2f",formula);
	
	return 0;
}
