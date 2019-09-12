/*	Funciones:
	
	-Funciones sin retorno de valor:
	
		void nombreFuncion ( parametros ){
			Instrucciones...
		}
		
	- Funciones con retorno de valor:
	
		tipo_data nombreFuncion ( parametros ) {
			Intrcucciones...
			return expresion
		}
*/

//1. Salduo por pantalla con funcion void
//2. Sumar 2 numeros

#include<stdio.h>
/*
//Prototipos
void saludo();

int main () {
	
	saludo();
	
	return 0;
}

void saludo () {
	printf("\nHola como estas?\n");
}
*/
int sumar(int n1,int n2);

int main () {
	int a,b;
	
	printf("Digite 2 numeros: ");
	scanf("%i %i",&a,&b);
	
	printf("\n La suma es: %i",sumar(a,b));
	return 0;
}

int sumar(int n1,int n2){
	int suma = 0;
	
	suma = n1 + n2;
	
	return suma;
}
