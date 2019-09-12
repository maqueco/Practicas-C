/* Dadas las horas trabajadas de un persona y el valor por hora
Calcuar su salario e imprmirlo */

#include<stdio.h>

int main (){
	
	int horas;
	float valorXhora,salario;
	
	printf("Escriba la horas trabajadas: ");
	scanf("%i", &horas);
	printf("Escriba el valor por hora: ");
	scanf("%f", &valorXhora);
	
	salario = horas * valorXhora;
	
	printf("El salario del empleado es: $%.2f",salario);
	
	return 0;
}
