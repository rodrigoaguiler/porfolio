#include <stdio.h>
#include <string.h>
#include <math.h>
#define TANMAX 100
typedef char cadena[60];
typedef struct {
	cadena ciudad;
	cadena calle;
	int numero;
}DIRE;
struct proveedor{
	int codigo;
	cadena nombre;
	DIRE direccion;
	int telefono;
};
typedef struct proveedor PROVEEDOR;
struct articulo{
	int art;
	cadena descripcion;
};
typedef struct articulo ARTICULO;
typedef struct{
	int dia;
	int mes;
	int anio;
}FECHA;
struct provee{
	int codProv;
	int codart;
	int cantidad;
	float pu;
	FECHA fecha;
};
typedef struct provee PROVEE;

typedef enum {CIERTO,FALSO} booleano;

int main() {
	PROVEEDOR listaP[TANMAX];
	ARTICULO listaA[TANMAX];
	PROVEE listaC[TANMAX];
	int n=0,m,k,cod,b,i,j,largo,cp1,ca,BP,BA,rta,buscP,a,c;
	int cantC[TANMAX],pmay;
	float total;
	cadena nom;
	cadena ciudad;
	int opc;
	do{
		printf("Ingrese 1 para ingresar datos de proveedor y su nombre unico \n");
		printf("Ingrese 2 para ingresar N articulos \n");
		printf("Ingrese 3 para ingresar un articulo de un proveedor \n");
		printf("Ingrese 4 para calcular el importe total de un proveedor \n");
		printf("Ingrese 5 para mostrar el proveedor que hizo más compras durante el año \n"); 
		printf("Ingrese 6 para mostrar la cantidad de proveedores de una ciudad \n");
		scanf("%i",&opc);
		switch(opc){
			case 1:		//INCISO A//
				printf("Ingrese el codigo del articulo \n");
				scanf("%i",&cod);fgetc(stdin);
				printf("Nombre del producto\n");
				fgets(nom,50,stdin); nom[strlen(nom)-1]='\0';
				b=FALSO;i=0;
				while(i<n && b==FALSO){
					if(cod==listaP[i].codigo || strcmp(nom,listaP[i].nombre)==0){
						b=CIERTO;
					}else{
						i+=1;
					}
				}
				if(b==CIERTO){
					printf("El codigo y el nombre ya se encuentran \n");
				}else{
					listaP[n].codigo=cod;
					strcpy(listaP[i].nombre,nom);
					printf("Ingese el telefono del proveedor \n");
					scanf("%i",&listaP[n].telefono);
					
					fgets(listaP[n].direccion.ciudad,50,stdin);
					largo=strlen(listaP[n].direccion.ciudad);
					listaP[n].direccion.ciudad[largo-1]='\0';
					
					fgets(listaP[n].direccion.calle,50,stdin);
					largo=strlen(listaP[n].direccion.calle);
					listaP[n].direccion.calle[largo-1]='\0';
					
					scanf("%i",&listaP[n].direccion.numero);
					n+=1;
				}
				break;
			case 2: //INCISO B//
				printf("Ingrese la cantidad de articulos que vende la empresa \n");
				scanf("%i",&m);
				for(i=0;i<n;i++){
					scanf("%i",&listaA[i].art);
					
					fgets(listaA[i].descripcion,50,stdin);
					largo=strlen(listaA[i].descripcion);
					listaA[i].descripcion[largo-1]='\0';
				}
				break;
			case 3:		//INCISO C//
				printf("Ingrese el codigo de proveedor \n");
				scanf("%i",&cp1);
				//completar el printf//
				scanf("%i",&ca);
				BP=FALSO;i=0;
				while(i<n && BP==FALSO){
					if(cp1==listaP[i].codigo){
						BP=CIERTO;
					}else{
						i++;
					}
				}
				BA=FALSO;j=0;
				while(j<n && BA==FALSO){
					if(ca==listaA[j].art){
						BA=CIERTO;
					}else{
						j++;
					}
				}
				if(BP==CIERTO && BA==CIERTO){
					listaC[k].codProv=cp1;
					listaC[k].codart=ca;
					scanf("%i",&listaC[k].cantidad);
					scanf("%f",&listaC[k].pu);
					scanf("%i",&listaC[k].fecha.dia);
					scanf("%i",&listaC[k].fecha.mes);
					scanf("%i",&listaC[k].fecha.anio);
					k++;
				}else{
					printf("Revise el codigo de proveedor o el articulo \n");
					printf("Proveedores: ");
					for(i=0;i<n;i++){
						printf("%i",listaP[i].codigo);
					}
					printf("\n");
					printf("Articulos: ");
					for(i=0;i<n;i++){
						printf("%i",listaA[i].art);	
					}
					printf("\n");
				}
				break;
			case 4:		//INCISO D//
				for(i=0;i<n;i++){
					printf("Proveedor %i: %s \n",i,listaP[i].nombre);
				}
				printf("Elija el proveedor numero: ");
				scanf("%i",&rta);
				buscP=listaP[rta].codigo;
				total=0;
				for(i=0;i<k;i++){
					if(listaC[i].codProv==buscP){
						total+=listaC[i].cantidad* listaC[i].pu;
					}
				}
				printf("TOTAL= %f \n",total);
				break;
			case 5: 		//INCISO E//
				//recorrer//
				for(i=0;i<n;i++){	//cada proveedor//
					cantC[i]=0;
					scanf("%i",&a);	//recorrer compras//
					for(i=0;i<n;i++){
						if(listaP[i].codigo==listaC[j].codProv && listaC[j].fecha.anio==a){
							cantC[i]++;
						}
					}
				}
				pmay=0;
				for(i=0;i<n;i++){
					if(cantC[i]>cantC[pmay]){
						pmay=i;
					}
				}
				printf("Proveedor: %s \n",listaP[pmay].nombre);
				break;
			case 6: 	//INCISO F//
				fgets(ciudad,50,stdin);
				ciudad[strlen(ciudad)-1]='\0';
				c=0;
				for(i=0;i<n;i++){
					if(strcmp(listaP[i].direccion.ciudad,ciudad)==0){
						c++;
					}
				}
				printf("Cantidad de proveedores de %s = %i \n",ciudad,c);
				break;
		}	
	}while(opc!=0);
	return 0;
}

