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
//Prototipos
void saludo();

int main () {
	
	saludo();
	
	return 0;
}

void saludo () {
	printf("\nHola como estas?\n");
}
