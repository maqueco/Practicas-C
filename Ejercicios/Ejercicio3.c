/*3. Sacar la hipotenusa de un triangulo rectangulo,
pidiendo al usuario el valor de los 2 catetos */

#include<stdio.h>
#include<math.h>

int main (){
	
	float hip,a,b;
	
	printf("Escriba el valor de los 2 catetos:");
	scanf("%f %f",&a,&b);
	
	hip = sqrt(pow(a,2)+pow(b,2)); 
	//sqrt raiz cuadrar
	//pow(.,X) elevado a X
	
	printf("La hipotenusa del triangulo es: %.2f",hip);
	
	return 0;
}
