/*2. Comprobar si un numero digitado por el usuario
es positivo o negativo*/

#include<stdio.h>

int main(){
	int a;
	
	printf("Escriba un numero: ");
	scanf("%i",&a);
	
	if(a >= 0)
		puts("El valor es positivo");
	
	if(a < 0)
		puts("El valor es negatico");
	
	return 0;
}
