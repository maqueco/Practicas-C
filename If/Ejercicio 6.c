/*6. Ingrese un numero y calcule e imprima su raiz cuadrada.
Si el numero es negativo imprima el numero y un mensaje
que diga "tiene raiz imaginaria". */

#include<stdio.h>
#include<math.h>

int main(){
	
	float a;
	
	printf("Escriba un numero: ");
	scanf("%f",&a);
	
	if(a >= 0){
		a = sqrt(a);
		printf("\nLa raiz cuadrada es %.2f",a);
	}
	else{
		printf("\nLa raiz es imaginaria");
	}
	return 0;
}


