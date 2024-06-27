#include <stdio.h>

int main() {
	//Programa 4//
	int a;
	int *p;
	int **q;
	
	a=5;
	p=&a;
	q=&p;
	printf("Contenido de a:%i \n",*p);
	printf("Direccion 1:%p \n",p);
	printf("Direccion 2:%p \n",q);
	printf("En este programa podemos ver como el puntero p guarda la direccion de memoria de a y el puntero q guarda la direccion de memoria de p\n");
	printf("Posterioremente muesta la direccion de memoria de ambos punteros");
	return 0;
}

