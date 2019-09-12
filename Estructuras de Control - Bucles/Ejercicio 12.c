//12. Serie Fibonacci

#include<stdio.h>

int main () {
	
	int i,n,fib1=0,fib2=1,fib3=1;
	
	printf("Escriba el numero de elementos:");
	scanf("%i",&n);
	
	for(i=1; i<=n; i++){
		fib3 = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib3;
		printf("%i , ",fib1);
	}
	
	return 0;
}
