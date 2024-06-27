#include <stdio.h>

int main() {
	//Programa 2//
	int v[3]={10,20,30};
	int *ptr;
	
	ptr=v;
	printf("VECTOR USANDO EL PUNTERO\n");
	printf("V[0]=%i\n",*ptr);
	printf("V[1]=%i\n",*(ptr+1));
	printf("V[2]=%i\n",*(ptr+2));
	printf("EL PROGRAMA MUESTRA UN VECTOR DE PUNTEROS USANDO LA DIRECCION DE MEMORIA COMO ELEMENTOS DEL VECTOR Y MOSTRANDO EL CONTENIDO DE LA MISMA");
	return 0;
}

