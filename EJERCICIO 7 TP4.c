#include <stdio.h>
#include <string.h>
#define TANMAX 100
typedef char cadena[50];
enum tipoTel {oficina,fax,celular,casa};
typedef enum tipoTel TIPOTEL;

struct telefono{
	int codPais;
	int codArea;
	int numero;
	TIPOTEL tipo;
};
typedef struct telefono TELEFONO;

typedef enum{hotmail,gmail,outlook,yahoo}DOMINIO;

struct correo {
	cadena usuario;
	DOMINIO dom;
};
typedef struct correo CORREO;

struct persona{
	int dni;
	cadena nyap; //NOMBRE Y APELLIDO//
	char contacto;
	union{
		TELEFONO t;
		CORREO c;
	};
};
typedef struct persona PERSONA;
int main() {
	//variables//
	int opc,largo,i,c;
	PERSONA lista[TANMAX];
	int n=0;
	printf("OPCIONES \n");
	printf("-------- \n");
	printf("Ingrese 1 para ingresar los datos de una persona \n");
	printf("Ingrese 2 para mostrar los nombres de las personas con telfono fijo\n");
	printf("Ingrese 3 para contar la cantidad de personas con dominio YAHOO\n");
	printf("Ingrese 0 para salir \n");
	do{
		scanf("%i",&opc);
		switch(opc){
		case 1: //inciso A//
			printf("Ingrese el DNI: ");
			scanf("%i",&lista[n].dni);
			printf("Ingrese el nombre y apellido\n");
			scanf("%i",&lista[n].nyap);
			fgets(lista[n].nyap,50,stdin);//INGRESAR EL NOMBRE DE LA PERSONA DEL DNI
			largo=strlen(lista[n].nyap);
			lista[n].nyap[largo-1]='\0';
			printf("Ingrese T para telefono o C para correo: \n");
			scanf("%c",&lista[n].contacto);fgetc(stdin);
			switch(lista[n].contacto){
			case 'T':
				printf("Ingrese el codigo de pais\n");
				scanf("%i",&lista[n].t.codPais);fgetc(stdin);
				printf("Ingrese el codigo de Area \n");
				scanf("%i",&lista[n].t.codArea);fgetc(stdin);
				printf("Ingrese un numero \n");
				scanf("%i",&lista[n].t.numero);fgetc(stdin);
				printf("0-oficina 1-fax 2-celular 3-casa: \n");
				scanf("%i",&lista[n].t.tipo);fgetc(stdin);
				n++;
				break;
			case 'C':
				fgets(lista[n].c.usuario,50,stdin);
				largo=strlen(lista[n].c.usuario);
				lista[n].c.usuario[largo-1]='\0';
				printf("0-Hotmail 1-Gmail 2-outlook 3-Yahoo: \n");
				scanf("%i",&lista[n].c.dom);fgetc(stdin);
				n++;
				break;
			}
			printf("OPCIONES\n");
			break;
		case 2:	//inciso b//
			
			for(i=0;i<n;i++){
				if(lista[i].contacto=='T' && lista[i].t.tipo==3){
					printf("%s \n",lista[i].nyap); //NOMBRE Y APELLIDO//
				}
			}
			printf("OPCIONES \n");
			break;
		case 3: 	//inciso c//
			c=0;
			for(i=0;i<n;i++){
				if(lista[i].contacto=='C' && lista[i].c.dom==yahoo){
					c+=1;
				}
			}
			printf("La cantidad de personas con correo con dominio yahoo son %i \n",c);
			break;
			printf("OPCIONES\n");
		}	
	}while(opc!=0);	
	
	return 0;
}
