#include <stdio.h>
struct complejo{
	float pre;
	float pim;
};
typedef struct complejo COMPLEJO;
COMPLEJO ingresarComplejo();	//TIPO FUNCION//
	void sumarcomplejo(COMPLEJO *res,COMPLEJO C);	//TIPO PARAMETRO * REFERENCIA//
	void mostrarComplejo(COMPLEJO C);	//TIPO PROCEDIMIENTO//
	
	
int main() {
	COMPLEJO comp,acu;
	int m,i;
	printf("Ingrese la cantidad de numeros complejos: ");
	scanf("%i",&m);	acu.pre=0;	acu.pim=0;
	printf("__________________________________________\n");
	
	for(i=0;i<m;i++){
		comp=ingresarComplejo();
		//acu=sumarcomplejo(acu,comp);	//c=a+b;
		sumarcomplejo(&acu,comp);		//acu=acu+comp;
	}
	mostrarComplejo(acu);
	return 0;
}


COMPLEJO ingresarComplejo(){
	COMPLEJO nuevo;
	printf("Ingrese la parte real: ");
	scanf("%f",&nuevo.pre);
	printf("Ingrese la parte imaginaria: ");
	scanf("%f",&nuevo.pim);
	
	printf("-----------------------------\n");
	return nuevo;
}
void mostrarComplejo(COMPLEJO C){
	printf("Complejo (%f,%f) \n",C.pre,C.pim);
}
void sumarcomplejo(COMPLEJO *res,COMPLEJO C){	//opcion b para modulo//
	//res=res+c;
	(*res).pre=(*res).pre+C.pre;
	(*res).pim=(*res).pim+C.pim;
}
