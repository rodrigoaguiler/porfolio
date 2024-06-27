//SUMA DE FRACCIONES//
#include <stdio.h>
//#include "RACIONAL.h"
//definicion de tipos de datos
struct racional{
	int a;
	int b;
};
typedef struct racional RACIONAL;
//definicion de operaciones
RACIONAL crear(void); //retorna un racional
RACIONAL sumar(RACIONAL r,RACIONAL q);
void mostrar(RACIONAL r);

int main() {
	RACIONAL r1,r2,r3;
	printf("\n RACIONAL 1: ");
	r1=crear();
	mostrar(r1);
	
	printf("\n RACIONAL 2: ");
	r2=crear();
	mostrar(r2);
	
	printf("\n La suma es (sin simplificar): ");
	r3=sumar(r1,r2);
	mostrar(r3);
	return 0;
}

//implementacion de operaciones
RACIONAL crear(void){
	RACIONAL q;
	printf("Ingrese numerador: ");
	scanf("%i",&q.a);
	printf("\n Ingrese denominador distinto de 0: ");
	q.b=0;
	while(q.b==0){
		scanf("%i",&q.b);
	}
	return(q);
}
RACIONAL sumar(RACIONAL p,RACIONAL q){
	RACIONAL r;
	r.a= p.a * q.a + (q.a * p.b);
	r.b= p.b * q.b;
	return(r);
}
void mostrar(RACIONAL r){
	printf("RESULTADO\n");
	printf("%i\n",r.a);
	printf("-.-.-\n");
	printf("%i",r.b);
}
