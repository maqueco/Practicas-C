/*2. Consideremos una funcion que recibe un numero
n e imprime los numeros del n al 1. Con recursividad
*/

#include<stdio.h>
int contr(int n);

int main(){
	int num,i;
	
	printf("Digite un numero: ");
	scanf("%i",&num);
	for(i=num;i>=1;i--){
		printf("%i , ",contr(i));
	}
	
	return 0;
}

int contr(int n){
	if (n==1){
		return n;
	}
	else {
		return contr(n-1)+1;
	}
}
