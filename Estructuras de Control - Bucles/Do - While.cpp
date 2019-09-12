/* Repeticion: El bucle do...while

	sintaxis:
	
			do{
				Instruciones...
			}while(condicion) 			*/
		
//Mostrar los 10 primeros numeros
//Saludo

#include<stdio.h>

/*int main() {
	int i=1;
	
	do{
		printf("%i. \n",i);
		i++;
	}while(i<=10)
	
	
	return 0;
}*/

int main (){
	char opc;
	
	do{
		fflush(stdin);
		printf("Hola");
		printf("\nDigite 's' para saludar nuevamente: ");
		scanf("%c",&opc);
	}while(opc == 's' || opc == 'S');
	
	return 0;
}
