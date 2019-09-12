/*Sentencia if de dos alternativas: if-else

	if (Condicion)
		Accion1
	else
		Accion2
*/
//Nota del estudiante

#include<stdio.h>

int main(){
	float nota;
	
	printf("Escriba la nota de su examen: ");
	scanf("%f",&nota);
	
	if(nota > 10.5){
		puts("El alumno esta aprobado");
	}
	else{
		puts("El alumno esta desaprobado");
	}
	return 0;
}
