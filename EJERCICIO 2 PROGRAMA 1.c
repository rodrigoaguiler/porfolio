#include <stdio.h>

int main() {
	printf("Ingrese un numero entero: ");
	int num1;
	int *dir;
	
	scanf("%i",&num1);
	dir=&num1;
	printf("El numero ingresado es : %i\n",*dir);
	printf("Se encuentra en la posicion de memoria: %p\n",dir);
	
	printf("EL PROGRAMA INGRESA UN NUMERO EN UNA DIRECCION DE MEMORIA POR MEDIO DEL PUNTERO *DIR MOSTRANDO LA DIRECCION DE MEMORIA Y EL NUMERO ");
	return 0;
}

