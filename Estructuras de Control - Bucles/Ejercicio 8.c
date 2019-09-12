/* 8. Hacer un arbol con '*' del tipo:
	ejemplo:
	Digite el numero de filas: 5 
	*
	**
	***
	****
	*****
*/

#include<stdio.h>

int main () {
	int n,i,j;
	
	printf("Digite el numero de filas:");
	scanf("%i",&n);
	
	for( i=1; i<=n; i++) {
		for( j=1; j<=i ; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
