/* Funciones Matematicas:

	ceil(x) -> Redonde al proximo entero mas cercano.
	fabs(x) -> Devuelve el valor absoluto de x.
	floor(x) -> Redondea por defecto al entero mas proximo.
	fmod(x,y) -> Calcula el resto de la division de x/y.
	pow(x,y) -> Calcula x elevado a la potencia y.
	sqrt(x) -> Devuelve la raiz cuadrada de x.
*/

#include<stdio.h>

void funcion_matematica();

int main(){
	
	funcion_matematica();
	return 0;
}

void funcion_matematica(){
	float x,cambio = 0;
	printf("Digite un numero: ");
	scanf("%f",&x);
	
/*	cambio = ceil(x);
	cambio = fabs(x);
	cambio = floor(x);
*/
	printf("%.2f",cambio);
}
