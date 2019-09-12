/* Una tienda ofrece un descuento del 15% sobre el total de la compra
y un cliente desea saber cuanto debera pagar finalmente por su compra*/

#include<stdio.h>

int main (){
	
	float total,descuento,precio;
	
	printf("Escriba el monto de la compra: ");
	scanf("%f", &total);
	
	descuento = total*0.15;
	precio = total - descuento;
	
	printf("El precio final de la compra es: $%.2f",precio);
	
	return 0;
}
