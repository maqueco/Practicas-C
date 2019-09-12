/*7. Ingresar por teclado el nombre y el signo de cualquier persina e imprima,
el nombre solo sila persona es signo Aries, caso contrario imprima no es signo Aries.*/

#include<stdio.h>

int main(){
	char nombre[30],signo[20];
	printf("Escriba su nombre: ");
	gets(nombre);
	printf("Escriba su Signo: ");
	gets(signo);
	
	if(strcmp(signo,"aries") == 0){
		printf("\nEs signo aries, su nombre es: %s",nombre);
	}
	else{
		printf("No es signo aries");
	}
	
	return 0;
}
