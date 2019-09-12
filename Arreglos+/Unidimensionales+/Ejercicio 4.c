/*4. Hacer 2 arrays de cadenas de
 caracteres, almacenar 2 nombre
cada uno dentro de su respectiva 
variable, y luego intercambiar el contenido de los arrays.*/


#include<stdio.h>
#include<conio.h>
#define SIZE 20

int main() {
	
	char array1[SIZE],array2[SIZE],arrayaux[SIZE];
	
	printf("Digite un nombre para el array 1: ");
	gets(array1);
	printf("Digite un nombre para el array 2: ");
	gets(array2);
	strcpy(arrayaux,array1);
	strcpy(array1,array2);
	strcpy(array2,arrayaux);

	
	printf("\nEl contenido de los array a cambiado.");
	printf("\nEl array 1 ahora es %s.",array1);
	printf("\nEL array 2 ahora es %s.",array2);
	getch();
	return 0;
}
