/*10. Una distribuidora de motocicletas tiene un promocion de fin de año
que consiste en lo siguiente.
Las motos marca Honda tienen un descuento del 5%,
las marca Yamaha del 8% y las suzuki del 10%,
las otras marcas 2%.*/

#include<stdio.h>

int main(){
	char moto[40];
	
	printf("Escriba la marca de la moto para conocer el descuento: ");
	scanf("%s",&moto);
	
	if(strcmp(moto,"honda") == 0){
		printf("El descuento de la marca %s es del 5%",moto);
	}
	else if(strcmp(moto,"yamaha") == 0){
		printf("El descuento de la marca %s es del 8%",moto);
	}
		else if(strcmp(moto,"suzuki") == 0){
			printf("El descuento de la marca %s es del 10%",moto
			);
		}
			else {
				printf("El descuento de la marca %s es de 2%.",moto);
			}
	return 0;
}
