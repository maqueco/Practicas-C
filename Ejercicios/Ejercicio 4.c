/*5. Hacer un Programa que calcule areas e trapecios*/

#include<stdio.h>
#include<math.h>

int main (){
	
	int a,b,area,altura;
	
	printf("Escriba el valor de la base menor: ");
	scanf("%i",&a);
	
	printf("Escriba el valor de la base mayor: ");
	scanf("%i", &b);
	
	printf("Escriba la altura: ");
	scanf("%i", &altura);
	
	area = (((a+b)*altura)/2);
	
	printf("\nEl area del triangulo es: %i",area);

	
	return 0;
}
