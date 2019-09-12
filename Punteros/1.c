//Demostrar el uso basico de punteros

/*
	posiciones de memoria
	punteros
*/

#include<stdio.h>

int main() {
	int numero = 50;
	int *p_numero;
/*	
	printf("%i",numero); //Dato
	printf("\n%p",&numero); //Posicion en memoria
*/
	p_numero = &numero; //&numero = Posicion de memoria de la variabe numero
	
	printf("Valor de la variable\n");
	printf("Dato: %i",numero);
	printf("\nDato: %i",*p_numero);
	printf("\n\nPosicion de memoria:\n");
	printf("Posicion: %p",&numero);
	printf("\nPosicion: %p",p_numero);
	
	return 0;
}
