/*3. Hacer 2 arrays de cadenas de caracteres, pedir el nombre al usuario
guardarlo dentro de un array y luego, copiar el contenido de ese array
a otro.*/
#include<stdio.h>
#include<conio.h>
#define SIZE 20

int main() {
	char nombre1[SIZE],nombre2[SIZE];
	printf("Digite su nombre: ");
	gets(nombre1); 
	
	strcpy(nombre2,nombre1);
	
	printf("\nSu nombre es: %s",nombre2);
	
	getch();
	return 0;
}
