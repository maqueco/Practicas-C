/*4. Hacer un programa que pida por pantalla un
numero del 1 al 10 y mediante un procedimiento 
muestre por pantalla el numero escrito en letras. */

#include<stdio.h>
void num_letra ();

int main() {
	
	num_letra();
	
	return 0;
}

void num_letra () {
	int n;
	
	do{	
		printf("Digite un numero del 1 al 10 a expresar en letras: ");
		scanf("%i",&n);
		
		switch(n) {
			case 1: printf("Uno");break;
			case 2: printf("Dos");break;
			case 3: printf("Tres");break;
			case 4: printf("Cuatro");break;
			case 5: printf("Cinco");break;
			case 6: printf("Seis");break;
			case 7: printf("Siete");break;
			case 8: printf("Ocho");break;
			case 9: printf("Nueve");break;
			case 10: printf("Diez");break;
		}		
	}while( n >= 11);
}

