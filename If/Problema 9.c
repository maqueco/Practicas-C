//9. Hacer un Progama que borre la pantalla al pulsar 1.

#include<stdio.h>
#include<stdlib.h>

int main(){
	char tecla;
	
	printf("Programa de borrado de pantalla!!!");
	printf("\n--------------------------------\n"); 
	printf("\n--------------------------------\n");
	printf("\nDigite el numero 1: ");
	scanf("%c",&tecla);
	
	if(tecla == '1'){
		system("cls");//funcion que limpia pantalla
		printf("Ha funcionado el limpiado de pantalla");
	}	
	else{
		fflush(stdin);//Limpieza de buffer de memoria
		printf("\nNo funciono");
		printf("\nPor favor, escriba el numero 1: ");
		scanf("%c",&tecla);
		
		if(tecla == '1'){
			system("cls");
		}
		else{
			printf("No funciono");
		}
	}
	return 0;
}
