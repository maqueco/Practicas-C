//9. Determinar si un Numero es primo o no

#include<stdio.h>

int main() {
	int i, n, j = 0;
	
	printf("Escriba un numero: ");
	scanf("%i",&n);
	
	for(i=1;i<=n;i++){
		if(n%i==0){
			j++;
		}
	}
	if (j>2) {
		printf("\n El numero no es primo");
	}
	else {
		printf("\n El numero es primo");
	}
	return 0;
}
