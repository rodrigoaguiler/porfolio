#include <stdio.h>
#include <string.h>
#define TANMAX 100
typedef char CADENA[100];
struct fecha{
	int dia,mes,anio;
};
typedef struct fecha FECHA;
struct vendedor{
	int numIde;
	CADENA NyA;
	FECHA Fingreso;
	int tel;
	CADENA email;
};
typedef struct vendedor VENDEDOR;
typedef struct{
	int idv,idp,cant;
	FECHA F;
}VENTA;

struct paquete{
	int numprod;
	CADENA nomprod;
	CADENA origen;
	CADENA destino;
	int cantlug;
	CADENA lugares[50];
	int dias,precio;
};
typedef struct paquete PAQUETE;
//invocacion
void moduloA(VENDEDOR v[]);
void moduloB(PAQUETE p[],int *np);
void moduloC(VENTA ventas[],int *nv,VENDEDOR v[],PAQUETE p[],int np);
void moduloD(VENTA ventas[],int nv,int idv,int m, int a);
void moduloE(VENTA ventas[],int nv,int idv,int m, int a,int bp);


int main() {
	//variables
	int opc,i;
	VENDEDOR v[10];
	PAQUETE p[TANMAX];
	VENTA ventas[TANMAX];
	int np=0,nv=0,idv,m,a;
	float bp=0;

	printf("Ingreso \n");
	printf("1-CARGA DE 10 VENDEDORES\n");
	printf("2-INGRESAR DATOS DE UN PAQUETE OFRECIDO\n");
	printf("3-INGRESAR LA VENTA DE UN VENDEDOR DE LA EMPRESA \n");
	printf("4-MOSTRAR EL TOTAL DE VENTAS DE UN DETERMINADO EMPLEADO\n");
	printf("5-CALCULAR EL MONTO A PAGAR DE UN EMPLEADO DURANTE UN DETERMINADO MES Y AÑO\n");
	do{
		printf("Ingrese la opcion\n");
		scanf("%i",&opc);
		switch(opc){
		case 1:
			for(i=0;i<10;i++){
				moduloA(v);
			}
			;break;
		
		case 2: moduloB(p,&np);break;
		
		case 3: moduloC(ventas,&nv,v,p,np);break;
		
		case 4: printf("Ingrese el empleado \n");
				scanf("%i",&idv);
				printf("Ingrese el mes de la venta \n");
				scanf("%i",&m);
				printf("Ingrese el año de la ventas \n");
				scanf("%i",&a);
				moduloD(ventas,nv,idv,m,a);break;
		case 5:
			printf("Ingrese vendedor[0 al 9]\n");
			scanf("%i",&idv);
			printf("Ingrese el mes \n");
			scanf("%i",&m);
			printf("Ingrese el año \n");
			scanf("%i",&a);
			printf("MONTO= %i \n",ventas);
			moduloE(ventas,nv,idv,m,a,bp);
			break;
		}
	} while(opc!=0);
	return 0;
}
void moduloA(VENDEDOR v[]){
	int i=0,largo;
	printf("Ingrese el numero de identificación\n");
	scanf("%i",&v[i].numIde);fgetc(stdin);
	printf("Ingrese nombre y apellido\n");
	fgets(v[i].NyA,100,stdin);largo=strlen(v[i].NyA);v[i].NyA[largo-1]='\0';
	printf("Ingrese la fecha de ingreso a la empresa\n");
	printf("Ingrese el dia\n");
	scanf("%i",&v[i].Fingreso.dia);
	printf("Ingrese el mes\n");
	scanf("%i",&v[i].Fingreso.mes);
	printf("Ingrese el año\n");
	scanf("%i",&v[i].Fingreso.anio);
	printf("Ingrese el telefono\n");
	scanf("%i",&v[i].tel);
	printf("Ingrese el emaill\n");
	fgets(v[i].email,50,stdin);largo=strlen(v[i].email);v[i].email[largo-1]='\0';
	i+=1;
}
void moduloB(PAQUETE p[],int *np){
	int i,cantlug;
	printf("Ingrese el numero de producto\n");
	scanf("%i",&p[*np].numprod);
	printf("Ingrese el nombre del tour\n");
	fgets(p[*np].nomprod,50,stdin);p[*np].nomprod[strlen(p[*np].nomprod)-1]='\0';
	printf("Ingrese el origen paquete\n");
	fgets(p[*np].origen,50,stdin);p[*np].origen[strlen(p[*np].origen)-1]='\0';
	printf("Ingrese el destino\n");
	fgets(p[*np].destino,50,stdin);p[*np].destino[strlen(p[*np].destino)-1]='\0';
	printf("Ingrese la cantidad de lugares a visitar\n");
	scanf("%i",&p[*np].cantlug);
	for(i=0;i<cantlug;i++){
		printf("Lugares \n");
		fgets(p[*np].lugares[i],20,stdin);
		p[*np].lugares[i][strlen(p[*np].lugares[i])-1]='\0';
	}
	printf("Dias de duracion del tour\n");
	scanf("%i",&p[*np].dias);
	printf("Precio Unitario\n");
	scanf("%i",&p[*np].precio);
}
void moduloC(VENTA ventas[],int *nv,VENDEDOR v[],PAQUETE p[],int np){
	int i=0;
	printf("Ingrese el numero de identificacion del vendedor\n");
	scanf("%i",&v[i].numIde);
	printf("Ingrese el numero de producto vendido\n");
	scanf("%i",&p[i].numprod);
	printf("Ingrese el dia de la venta\n");
	scanf("%i",&v[i].Fingreso.dia);
	printf("Ingrese el mes de la venta\n");
	scanf("%i",&v[i].Fingreso.mes);
	printf("Ingrese el año de la venta\n");
	scanf("%i",&v[i].Fingreso.anio);
	printf("ingrese la cantidad de productos vendidos\n");
	scanf("%i",ventas[i].cant);
	i++;
}
void moduloD(VENTA ventas[],int nv,int idv,int m, int a){
	int i,acu=0;
	for(i=0;i<nv;i++){
		if(a==ventas[i].F.anio && m==ventas[i].F.mes && ventas[i].idv==idv){
			acu=acu+ventas[i].cant;
		}
	}
	printf("El total de ventas del empleado ingresado es %i",acu);
}
void moduloE(VENTA ventas[],int nv,int idv,int m, int a,int bp){
	
}
