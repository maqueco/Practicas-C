/*13. Hacer un programa que imprima la suma de todos
los numero pares que hay desde 1 hasta n, y diga
cuantos numeros hay*/

#include<stdio.h>

int main () {
	int i,n,k=0,sum=0;
	
	printf("Digite un numero:");
	scanf("%i",&n);
	
	for( i=1; i<=n;i++){
		if(i%2 == 0){
			sum = sum + i;
			k = k+1;
		}
	}
	printf("El valor de la suma de los valores pares es %i y hay %i numeros",sum,k);

	return 0;
}
