/*9. Calcular el nuevo salario de un obrero si obtuvo un incremento del 25%
sobre su salario anterior. */

#include<stdio.h>

int main (){
	
	float a_salario,incremento,n_salario;
	
	printf("Escriba su salario a aumentar: ");
	scanf("%f", &a_salario);
	
	incremento = a_salario * 0.25;
	n_salario = a_salario + incremento;
	
	printf("El salario con aumento es: $%.2f",n_salario);
	
	return 0;
}
