/*12. Seleccionar un tipo de vehiculo e indicar el
peaje a pagar segun un valor numerico
1- Turismo, peaje = $500
2- Autobus, peaje = $3000
3- Moto, peaje = $300
caso contrario- Vehiculo no autorizado */

#include<stdio.h>

int main(){
	char vehiculo;
	
	printf("Escriba un tipo de vehiculo: ");
	scanf("%s",&vehiculo);
	
	switch(vehiculo){
		case 'Turismo': printf("La tarifa del peaje es $500");break;
		case 'Autobus': printf("La tarifa del peaje es $3000");break;
		case 'Moto': printf("La tarifa del peaje es $300");break;
		default: ("Vehiculo no autorizado");
	}
	
	return 0;
}
