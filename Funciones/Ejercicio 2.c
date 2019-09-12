/*2. Hacer un programa que realice la media aritmetica
de 2 numeros. (con funcion) */

#include<stdio.h>
float promedio (float a,float b);

int main () {
	float n,m;
	
	printf("Digite dos numeros a sacar promedio: ");
	scanf("%f %f",&n,&m);
	printf("La media aritmetica es: %.2f",promedio(n,m));
	
	return 0;
}

float promedio (float a,float b){
	float media;
	
	media = (a + b)/2;
	
	return media;
}
