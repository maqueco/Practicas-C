// 6. Sumar pares desde n hasta m.

#include<stdio.h>

int main () {
	
	int n,m,sum;

	printf("Escriba desde que valor quiere sumar: ");
	scanf("%i",&n);
	printf("Escriba hasta que valor quiere sumar: ");
	scanf("%i",&m);
	
	while ( n<=m ) {
		if (n%2==0) {
		sum = sum + n ;
		}
		n++;
	}	
	printf("%i",sum);
	return 0;
}
