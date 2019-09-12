//1. Serie Fibonacci con Recursividad

//1,1,2,3,5,8...

#include<stdio.h>
int fib(int n);

int main(){
	int numero,i;
	printf("Digite el numero de elementos: ");
	scanf("%i",&numero);
	
	for (i=1;i<=numero;i++){
		printf("%i , ",fib(i));
	}
	
	return 0;
}

int fib(int n){
	if(n==0 || n==1){
		return n;
	}
	else{
		return (fib(n-1)+fib(n-2));
	}
}
