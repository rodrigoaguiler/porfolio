#include <stdio.h>

int main() {
	//Programa 3//
	int i,n,suma;
	int v[30];
	int *ptr,*ptrFin;
	
	printf("Cantidad de elementos del vector: ");
	scanf("%i",&n);
	
	printf("Ingrese los numeros a sumar \n");
	for(i=0;i<n;i++){
		scanf("%i",&v[i]);
	}
	ptr=v; 	//ASIGNA LA DIRECCION DE INICIO DEL VECTOR//
	suma=0;
	ptrFin=ptr+n;
	for(ptr=v;ptr<ptrFin;ptr++){
		suma=suma+(*ptr);
	}
	printf("Suma total=%i \n",suma);
	printf("EL PROGRAMA REALIZA UNA SUMA DE NUMEROS QUE FUERON GUARDADOS EN EL VECTOR QUE, A SU VEZ, ESTA GUARDADO EN PUNTERO QUE SIRVE DE GUIA PARA SUMAR LOS NUMEROS");
	return 0;
}

