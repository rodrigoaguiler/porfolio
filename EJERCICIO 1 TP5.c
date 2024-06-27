#include <stdio.h>
#define TANMAX 1000
int main() {
	int y=5,z=3;
	
	int *nPtr=&y;
	//inciso d//
	printf("INCISO D\n");
	printf("-------- \n");
	printf("valor de nTpr: %i \n",*nPtr);
	printf("Variable ubicada en direccion %i \n",&nPtr);
	
	//inciso e//
	printf("INCISO E\n");
	printf("-------- \n");
	z=*nPtr;
	printf("valor de z: %i \n",z);
	
	//inciso f//
	printf("Inciso F \n");
	printf("-------- \n");
	*nPtr=7;
	printf("Valor de y luego del cambio: %i \n",*nPtr);
	
	//INCISO G//
	printf("INCISO G\n");
	printf("-------- \n");
	int *mPtr;
	mPtr=nPtr;
	printf("Direccion que apunta a la direccion de nptr: %i \n",mPtr);
	
	//INCISO H//
	printf("INCISO H\n");
	printf("--------\n");
	mPtr=&z;
	printf("mPtr con la direccion de z: %i \n",mPtr);
	
	//INCISO I//
	printf("INCISO I \n");
	printf("-------- \n");
	*mPtr=-1;
	printf("Valor de mPtr: %i \n",*mPtr);
	
	//INCISO J//
	printf("INCISO J\n");
	printf("-------- \n");
	printf("Variable y: %i \n",*nPtr);
	printf("Variable z: %i \n",*mPtr);
	
	//INCISO K//
	printf("INCISO K\n");
	printf("--------\n");
	*nPtr=*mPtr;
	printf("Variables y: %i Variable z: %i \n",*nPtr,*mPtr);

	return 0;
}

