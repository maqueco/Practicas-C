//Tipos de Datos

#include<stdio.h>

int main(){
	char a = 'e'; //tama�o= 1byte Rango: 0..255
	short b = -15; //tama�o= 2bytes Rango: -128..127
	int c = 1024; //tama�o= 2bytes Rango: -32768..32767
	unsigned int d = 128; //tama�o= 2bytes Rango: 0..65535
	long e = 123456; //tama�o= 4bytes Rango: -2147483648..2147483637
	float f = 15.678; //tama�o= 4bytes Rango: 3.4*(10  )..3.4*(10 )
	double g = 123123.123123; //tama�o= 8bytes Rango:1.7*(10 )..1.7*(10 ) 
	
	
	
	printf("El elemento es: %lf",g);
	
	
	return 0;
}
