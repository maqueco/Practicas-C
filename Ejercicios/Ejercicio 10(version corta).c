/*10. un alumno desea saber cual sera su calificacion final
Dicha calificacion se componde de:
*55% del promedio de sus tres parcilaes
*30% del examen final
*15% de un trabaja final */

#include<stdio.h>

int main (){
	
	float p1,p2,p3,exam,trab,calificacion;
	
	printf("Escriba la calificacion de sus parciales: ");
	scanf("%f %f %f",&p1,&p2,&p3);
	
	printf("Escriba la calificacion de su examen final: ");
	scanf("%f",&exam);
	
	printf("Escriba la calificacion de su trabajo final: ");
	scanf("%f",&trab);
	
	calificacion = ((p1+p2+p3)/3)*0.55 + (exam*0.30) + (trab*0.15);
	
	printf("Su Calificacion final es: %.2f",calificacion);
	
	
	return 0;
}
