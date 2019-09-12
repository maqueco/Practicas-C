//Entradas y Salidas

#include<stdio.h>

int main(){
	char x[50];
	
	printf("Escriba su nombre:");
	gets(x);//se usa para cadenas de sting
	
	printf("Su nombre es: %s",x);
	
	return 0;
}
