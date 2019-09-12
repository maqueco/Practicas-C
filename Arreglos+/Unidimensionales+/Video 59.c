/*Arrays o Arreglos Unidimensionales:

	-Arrays enteros
	-Arrays flotantes
	-Arrays de caracter
	-Arrays de String o Palabrs.
*/

#include<stdio.h>
#include<conio.h>

int main (){

	int i;
	
/*	float a[5];
	for(i=0;i<5;i++){
		printf("%i. Digite un numero: ",i+1);
		scanf("%f",&a[i]);
	}
	for(i=0;i<5;i++){
			printf("%.2f\n",a[i]);
	}
*/

/*	char a[5] = {'a','e','i','o','u'};
	
	for(i=0;i<5;i++){
		printf("%c",a[i]);
	}
*/

	char a[20];
	
	printf("Digite su nombre: ");
	gets(a);
	printf("%s",a);
		
	getch();
	return 0;
}
