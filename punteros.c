#include <stdio.h>
typedef struct{
	float x;
	float y;
}TIPOPUNTO;

int main() {
	int con=10;
	int *prt;
	TIPOPUNTO q;	TIPOPUNTO *pAPunto;
	
	printf("Variable comun:\n");
	
	*prt=*prt+2;
	printf("Valor de con usando *prt = %i \n",*prt);
	printf("Valor de con= %i \n",con);
	
	
	q.x=1;
	q.y=2;
	pAPunto = &q; //Guardo direccion
	(*pAPunto).x=10;
	(*pAPunto).y=10;
	
	printf("Punto q (x= %f, y= %f)\n",q.x ,q.y);
	
	
	return 0;
}
