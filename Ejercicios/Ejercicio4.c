/*4. Hacer un programa que calcule
longitudes de Circunferencias. */

#include<stdio.h>
#include<math.h>
#define PI 3.1416

int main (){
	
	float a,longitud;
	
	printf("Escriba el valor del radio:");
	scanf("%f",&a);
	
	longitud = 2*a*PI;
	
	printf("La longitud de la circunferencia es: %.2f",longitud);
		
	return 0;
}
