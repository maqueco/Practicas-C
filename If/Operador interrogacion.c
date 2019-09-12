/* Expresion Condicional: El operador '?'
Sintaxis:

	Condicion ? Expresion1: Expresion2 */

//Numero par

#include<stdio.h>
#include<math.h>

int main(){
	
	int numero;
	
	printf("Escriba un numero: ");
	scanf("%i",&numero);
	
	( numero % 2 == 0) ? printf("El numero es par") : printf("El numero es impar");
	//( numero % 2 == 0) ? funcion1() : funcion2();
	
	return 0;
}
