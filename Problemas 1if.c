/* Problema 1: Comprobar a traves de un programa si un alumno aprobo o no
un examen (Aprueva si su nota es mayor a 10).5*/

#include<stdio.h>

int main(){
	float examen;
	
	printf("Escriba la nota el examen: ");
	scanf("%f",&examen);
	
	if(examen > 10.5){
		puts("El alumno esta aprobado");
		//puts imprime solo condicionales
	}
	
	return 0;
}
