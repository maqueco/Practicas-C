//11. Hacer un programa que calcule la suma de factoriales

#include<stdio.h>

int main () {
	int i,j,n,m,fact1=1,fact2=1,sum=0;
	
	printf("Escriba los factoriales a sumar: ");
	scanf("%i %i",&n,&m);
	for(i=1;i<=n;i++) {
		fact1 = fact1 * i;
	}
	for(j=1;j<=m;j++) {
		fact2 =	fact2 * j;
	}
	sum = fact1 + fact2;
	printf("La suma de los factorilaes es: %i",sum);
	
	return 0;
}
