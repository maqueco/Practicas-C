//3. Pasar de numero entero a numero binario con recurisividad

#include<stdio.h>

void bin(int n);

int main(){
	int num;
	
	do{
		printf("Digite un numero: ");
		scanf("%i",&num);
	}while(num<0);
	
	bin(num);
	
	return 0;
}

void bin (int n){
	if (n>1) 
		bin (n/2);
		printf("%i",n%2);

}
