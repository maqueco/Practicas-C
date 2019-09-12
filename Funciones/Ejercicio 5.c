/*5. Hacer un programa que pida por pantalla una temperatura en grados Celsius,
muestre un menu para convertirlos a Fahrenheit o Kelvin y muestre el equivalente por
pantalla, utilizar funciones.

Celsius a Fahrenheit:
	F = (9*C)/5 + 32;
	
Celsius a Kelvin:
	K = C + 273.15
*/

#include<stdio.h>

float kelvin (float C);
float fahrenheit(float C);

int main () {
	int opc;
	float C,F,K;
	
	do{
		printf("Digite el valor de los grados Celsius: ");
		scanf("%f",&C);
		printf("\n1. Convertir a grados Fahrenheit");
		printf("\n2. Convertir a grados Kelvin");
		printf("\n3. Salir");
		printf("\nOpcion: ");
		scanf("%i",&opc);
		
		switch(opc){
			case 1: F = fahrenheit(C);
				printf("\n El equivalente en grados Fahrenheit es: %f\n",F);break;
			case 2: K = kelvin(C);
				printf("\n El equivalente en grados kelvin es: %f\n",K);break;
		}
	}while(opc != 3);
	
	
	return 0;
}

float fahrenheit(float C) {
	float F;
	F = (9*C)/5 + 32;
	return F;
}

float kelvin (float C) {
	float K;
	K = C + 273.15;
	return K;
} 
