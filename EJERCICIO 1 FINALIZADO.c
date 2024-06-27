#include <stdio.h>
#include <string.h>
typedef char CADENA[50];
struct unoA {
	CADENA nombre;
	long DNI;
	CADENA ciudad;
	CADENA departamento;
};
typedef struct unoA UNOA;
struct dosA{
	CADENA nombres;
	long DNI;
	CADENA ciudades;
	CADENA departamentos;
};
struct{
	CADENA HORARIOS;
	char c;
};
typedef struct horario;
struct PARTIDOS{
	CADENA SOCIALISMO;
	CADENA SOCIALISMO;
};
typedef struct unoA punto;
typedef struct dosA var2;
typedef struct horario;
typedef struct PARTIDOS par;

int main() {
	//PUNTO A//
	int i,b,n=10;
	punto PUNTO;
	var2 VARIABLE;
	horario HORARIOSGENERADOS;
	par SOCIALISMO;
	for(i=0;i<n;i++){
		printf("Ingrese un nombre \n"); gets(PUNTO.nombre);
		printf("Ingrese una Ciudad \n");gets(PUNTO.ciudad);
		printf("Ingrese el departemento \n");gets(PUNTO.departamento);
		printf("Ingrese un DNI \n"); scanf("%L",&PUNTO.DNI);
		fgetc(stdin);
	}
	//PUNTO B//
	for(i=0;i<n;i++){
		if(strcmp(PUNTO.nombre,PUNTO.nombre)==0){
			printf("No es posible \n"); //NO ES POSIBLE COMPARAR 2 VARIAVLES DEL MISMO TIPO DE ESTRUCTURA 
		}
	}
	//PUNTO C//
	for(i=0;i<n;i++){
		VARIABLE.ciudades=PUNTO.ciudad;
	}
	//PUNTO D//
	for(i=0;i<n;i++){
		strcmp(PUNTO[i].nombre.ciudad);
	}
	//PUNTO E//
	//si es opcional, ua que tomaria el valor de struct el nombre de la variable//
	
	//PUNTO F//
	f=falso;
	for(i=0;i<n;i++){
		if(strcmp(SOCIALISMO.SOCIALISMO,SOCIALISMO.SOCIALISMO)<0){
			printf("no es posible");
		}
	}
	return 0;
}

