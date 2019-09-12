/*Hacer un programa que obtenga la media geometrica de tres numeros*/

#include<stdio.h>
#include<math.h>

int main () {
	
	float v1,v2,v3,result;
	
	printf("Escriba los 3 valores: ");
	scanf("%f %f %f",&v1,&v2,&v3);
	
	printf("La media geometrica es: %.2f",cbrt(v1*v2*v3));
	
	return 0;
}
