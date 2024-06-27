#include <stdio.h>
#define TANMAX 100
struct FECHA{
	int dia;
	int mes;
	int anio;
};
enum caballos {ElZaino,Rossillo,Pegasso,Bucefalo,Incitato};
struct apuesta{
	FECHA fCarrera;
	long dni;
	enum caballos cb;
	float monto;
};
typedef struct apuesta APUESTA;
int main() {
	APUESTA lista[TANMAX];
	int i,n=0,opc;
	do{
		printf("1- para ingresar los datos \n");
		printf("2- para cargar los datos de N apuestas \n");
		scanf("%i",&opc);
		switch(){
		case 1: 	//inciso a//
			printf("dia: ");
			scanf("%i",&lista[n].FCarrera.dia);
			---
			---
				
			printf("DNI: \n");
			scanf("%ln",&lista[n].dni);
			--
			---
			n+=1;
			break;
		
		case 2:	//inciso c// 
			for(i=0;i<n;i++){
				if(lista[i].FCarrera.mes==1 && lista[i].FCarrera.anio==2017){
					switch(lista[i].caballo){
						case ElZaino:
							printf("El zaino \n");
					}
				}
			}
			break;
		}	
	} while();
	return 0;
}

