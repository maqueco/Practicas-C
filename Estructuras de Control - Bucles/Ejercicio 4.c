// 4. Multiplos de 5 desde 1 hasta n

#include<stdio.h>

int main () {
	
	int i = 1,n;
	
	printf("Escriba un numero para comprobar los multiplos de 5: ");
	scanf("%i",&n);
	
	while(i<=n) {
		if(i%5==0){
			printf("%i\n",i);
		}
		i++;
	}
	return 0;
}
