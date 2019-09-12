/* El bucle for:

	Sintaxis:
	
		for(incializacion; condicion; incremento) {
		Instrucciones;
		...
		} 
		
//Mostrar los 10 primeros numeros - asecendente

#include<stdio.h>

int main () {
	
	int i;
	
	for(i = 1 ; i < 10 ; i++){
		printf("%i\n",i);
	}
	
	return 0;

//Mostrar los 10 primeros numeros - decendente

#include<stdio.h>

int main () {
	
	int i;
	
	for(i = 10 ; i >= 1 ; i--){
		printf("%i\n",i);
	}
	
	return 0;
}
*/
//Mostrar una frase 10 veces

#include<stdio.h>

int main () {
	
	int i;
	
	for( i=1 ; i <= 100 ; i++){
		printf("%i. No debo llegar tarde a clases.\n",i);
	}
	
	return 0;
}
