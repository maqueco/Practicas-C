/*16. Hacer un menu que considere las siguientes opciones:
caso 1: Cubo de un numero
caso 2: Numero par o impar
caso 3: Salir */

#include<stdio.h>
#include<math.h>

int main(){
	
	int opcion,numero;
	
	printf("\t Bienvenido al menu de opciones");
	printf("\n1. Obtener el cubo de un numero");
	printf("\n2. Obtener si un numero es par o impar");
	printf("\n3. Salir");
	printf("\nOpcion: ");
	scanf("%i",&opcion);
	
	switch(opcion){
		case 1: printf("Escriba un numero: ");
				scanf("%i",&numero);
				numero = pow(numero,3);
				printf("El cubo del numero es: %i",numero);
		break;
		
		case 2: printf("Escriba un numero: ");
				scanf("%i",&numero);
				if( numero % 2 == 0 ){
					printf("El numero es par");
				}
				else{
					printf("El numero es impar");
				}
		break;
		
		case 3: break;
		
		default: printf("Escriba de nuevo una opcion");
	}	
	return 0;
}
