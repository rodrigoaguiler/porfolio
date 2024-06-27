#include <stdio.h>
#include <math.h>
#define TANMAX 100

struct punto{
	float x;
	float y;
};
typedef struct punto PUNTO;

int main(){
	int n; //CANTIDAD DE PUNTOS//
	PUNTO lista[TANMAX];   
	int i;//INDICE
	int opc,con,pmay; float a,b,di,dmay;
	do{
		printf("MENU DE OPCIONES \n");
		printf("1-Ingresar N puntos \n");
		printf("2-Puntos sobre una recta \n");
		printf("3-Punto mas lejano a (0,0) \n");
		printf("0- Salir \n");
		scanf("%i",&opc);
		switch(opc){
		case 1:
			printf("Ingrese N: \n");
			scanf("%i",&n);
			for(i=0;i<n;i++){
				printf("Punto %i \n",i);
				printf("x:"); scanf("%f",&lista[i].x); 
				printf("y:"); scanf("%f",&lista[i].y);
			}
			break;
		case 2:
			printf("Ingrese los datos de la recta \n");
			printf("a: ");scanf("%f",&a);
			printf("b: ");scanf("%f",&b);
			for(i=0;i<n;i++){
				if(lista[i].y == a*lista[i].x+b){
					con++;
				}
			}
			printf("Puntos sobre la recta: %i \n",con);
			break;
		case 3:
			pmay=0; dmay=sqrt(pow(lista[0].x,2)+pow(lista[0].y,2));
			for(i=0;i<n;i++){
				//if(v[i]>v[pmay])//
				di=sqrt(pow(lista[i].x,2)+pow(lista[i].y,2));
				if(di>dmay){
					pmay=i;
					dmay=di;
				}
			}
			printf("Punto mas lejano x:%f y:%f \n",lista[pmay].x,lista[pmay].y);
			break;
		}
	}while(opc!=0);
	return 0;
}
	
