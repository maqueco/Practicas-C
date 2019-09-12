/*8. Ingresar por teclado el nombre, la edad y el sexo de cualquier persona
e imprima, solo si la persona es de sexo masculino y mayor de edad,
el nombre de la persona.*/

#include<stdio.h>

int main(){
	
	char nom[30],sexo[10];
	int edad;
	
	printf("Escriba su nombre: ");
	gets(nom);
	printf("Escriba su sexo: ");
	gets(sexo);
	printf("Escriba su edad: ");
	scanf("%i",&edad);
	if( edad >= 18 && strcmp(sexo,"masculino") == 0){
		printf("Su nombre es %s.",nom);
	}	
	
	return 0;
}
