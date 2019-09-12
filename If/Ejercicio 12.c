/*12. Seleccionar un tipo de vehiculo e indicar el
peaje a pagar segun un valor numerico
1- Turismo, peaje = $500
2- Autobus, peaje = $3000
3- Moto, peaje = $300
caso contrario- Vehiculo no autorizado */

#include<stdio.h>

int main(){
	int numero;
	
	printf("Escriba el numero de una de las opciones: ");
	printf("\n1. Turismo");
	printf("\n2. Autobus");
	printf("\n3. Moto\n");
	scanf("%i",&numero);
	
	switch(numero){
		case 1: printf("La tarifa del peaje es de $500.");break;
		case 2: printf("La tarifa del peaje es de $3000.");break;
		case 3: printf("La tarifa del peaje es de $300.");break;
		default: printf("Vehiculo no autorizado.");
	}
	return 0;
}
