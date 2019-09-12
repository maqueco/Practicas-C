/* Calcule la media aritmetica de 3 numeros cualquiera */

#include<stdio.h>

int main (){
	
	float a,b,c,promedio;
	
	printf("Escriba los 3 valores a promediar: ");
	scanf("%f %f %f",&a,&b,&c);
	
	promedio = (a+b+c)/3;
	
	printf("El promedio es: %.2f",promedio);
	
	return 0;
}
