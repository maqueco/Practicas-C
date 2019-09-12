/*3. Hacer un programa que muestre un menu con las 
opcones sumar, restar, multiplicar y dividir, el programa
solicitara una opcion y realizara la tarea elegida,
se debe usar un procedimiento. */

#include<stdio.h>

void menu();
void sumar();
void restar();
void multiplicar();
void dividir();

int main() {
	printf("Elija una opcion:");
	menu();
	
	return 0;
}

void menu(){
	int opc;
	
	do{
		printf("\n1. Sumar");
		printf("\n2. Restar");
		printf("\n3. Multiplicar");
		printf("\n4. Dividir");
		printf("\n5. Salir");
		printf("\nOpcion: ");
		scanf("%i",&opc);
		
		switch(opc){
			case 1: sumar();break;
			case 2: restar();break;
			case 3: multiplicar();break;
			case 4: dividir();break;
		}
	}while(opc != 5);
}

void sumar(){
	int n,m,suma=0;
	
	printf("Digite 2 numeros: ");
	scanf("%i %i",&n,&m);
	
	suma = n + m;
	
	printf("La suma es: %i\n",suma);
}
void restar(){
	int n,m,resta=0;
	
	printf("Digite 2 numeros: ");
	scanf("%i %i",&n,&m);
	
	resta = n - m;
	
	printf("La resta es: %i\n",resta);
}
void multiplicar(){
	int n,m,mul=0;
	
	printf("Digite 2 numeros: ");
	scanf("%i %i",&n,&m);
	
	mul = n * m;
	
	printf("La multiplicacion es: %i\n",mul);
}
void dividir(){
	int n,m,div=0;
	
	printf("Digite 2 numeros: ");
	scanf("%i %i",&n,&m);
	
	div = n / m;
	
	printf("La division es: %i",div);
}
