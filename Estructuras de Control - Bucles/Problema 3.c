// 3. Multiplcos de 3 desde 1 hasta n

#include<stdio.h>

int main () {
	int n, i = 1;
	
	printf("Digite el total de numero a comprobar: ");
	scanf("%i",&n);
	
	while(i<=n) {
		if(i%3==0){
			printf("%i\n",i);
		}
		i++;
	}

	return 0;
}
