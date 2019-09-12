/* La sentencia while

	Sintaxis:
	
		while(condicion) {
			intrucciones;
		}				*/
		
/* Mostrar los 10 primeros numeros de pantalla - ascendente

#include<stdio.h>

int main(){
	
	int i = 1;
	
	while(i<=10){
		printf("%i\n",i);
		i++;
	}
	
	return 0;
}

 Mostrar los 10 primeros numeros de pantalla - descendente

#include<stdio.h>

int main(){
	
	int i = 10;
	
	while(i>=0){
		printf("%i\n",i);
		i--;
	}
	
	return 0;
}

Mostrar 5 asterisco */

#include<stdio.h>

int main(){
	
	int i = 1;
	
	while(i<=5){
		printf("*");
		i++;
	}
	
	return 0;
}
