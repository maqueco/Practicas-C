/*11. Calcular la cantidad de segundo que estan incluidos
en el numero de horas, minutos y segundo ingresasdos
por el usuario. */

#include<stdio.h>

int main (){
	
	int horas,minutos,seg,t1,t2,t3,total;
	
	printf("Escriba la cantidad de horas: ");
	scanf("%i",&horas);
	printf("Escriba la cantidad de min: ");
	scanf("%i",&minutos);
	printf("Escriba la cantidad de segundos: ");
	scanf("%i",&seg);
	
	t1 = horas*3600;
	t2 = minutos*60;
	t3 = seg*1;
	
	total = t1+t2+t3;
	
	printf("La cantidad en segundos es: %i");
	
	return 0;
}
