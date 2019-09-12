/*10. un alumno desea saber cual sera su calificacion final
Dicha calificacion se componde de:
*55% del promedio de sus tres parcilaes
*30% del examen final
*15% de un trabaja final */

#include<stdio.h>

int main () {
	
	int parcial_1,parcial_2,parcial_3;
	float prom_parciales,porc_parciales,exam_fin,porc_exam_fin,trabaj_fin,porc_trabaj_fin,calificacion;
	
	printf("Escriba la nota de sus parciales: ");
	scanf("%i %i %i",&parcial_1,&parcial_2,&parcial_3);

	prom_parciales = (parcial_1 + parcial_2 + parcial_3)/3;
	porc_parciales = prom_parciales * 0.55;

	printf("Escriba la nota de sus examen final: ");
	scanf("%f",&exam_fin);

	porc_exam_fin = exam_fin * 0.30;
	
	printf("Escriba la nota de su trabajo final: ");
	scanf("%f", &trabaj_fin);
	
	porc_trabaj_fin = trabaj_fin * 0.15;
	
	calificacion = porc_parciales + porc_exam_fin + porc_trabaj_fin;
	
	printf("Su calificacion final es: %.2f",calificacion);
	
	return 0;
}
