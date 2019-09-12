/* Sentencia switch()

switch (selector){

case etiqueta1 : sentencia1;break;
case etiqueta2 : sentencia2;break;
case etiqueta3 : sentencia3;break;
default: sentencias;

}*/

//Ejemplo del numero

#include<stdio.h>

int main(){
	char vocal;
	
	printf("Escriba una vocal: ");
	scanf("%c",&vocal);
	
/*	switch(numero){
		case 1: printf("\nEs el numero 1");break;
		case 2: printf("\nEs el numero 2");break;
		case 3: printf("\nEs el numero 3");break;
		default: printf("No a escribto un ninguna de las opciones.");
	}*/
	switch(vocal){
		case 'a': printf("\nVocal a");break;
		case 'e': printf("\nVocal e");break;
		case 'i': printf("\nVocal i");break;
		case 'o': printf("\nVocal o");break;
		case 'u': printf("\nVocal u");break;
		default: printf("Usted no escribio una vocal");
	}
	
	return 0;
}
