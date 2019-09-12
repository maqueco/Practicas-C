/*6. Hacer un programa que muestre una tabla
de multiplicar hasta el 20 de un numero cualquiera
por pantalla, el numero se pedira en el programa
principal. Usar procedimiento;*/

#include<stdio.h>

void tabla(int n);

int main (){
	int num;
	
	printf("Digite un numero a multiplicar hasta 20: ");
	scanf("%d", &num);
	
	tabla(num);
	
	return 0;
}

void tabla(int n) {
	int i=0,mult;
	do{
		mult = n*i;
		i++;
		printf("\n%d",mult);
	}while (mult < 20);
}
