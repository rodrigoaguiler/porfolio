#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TANMAX 100
typedef char CADENA[50];
struct datos{
	CADENA nombre1;
	CADENA nombre2;
	CADENA apellido;
};
typedef struct datos DATOS;
int main() {
	DATOS nombres[TANMAX];
	int n,i,j,con,opc;
	CADENA otro;
	do{
		printf("1-Ingresar la cadena \n");
		printf("2-Cantidad de alumnos que tienen el 2do nombre otro nombre \n");
		printf("3-Mostrar los nombres en formato NOMBRE1 INICIAL2 \n");
		printf("4-Mostrar el nombre completo de los apellidos que sean palindromos \n");
		printf("0-Salir \n");
		scanf("%i",&opc); fgetc(stdin);
		switch(opc){
			case 1:
				printf("Ingrese la cantidad de alumnos \n");
				scanf("%i",&n);
				for(i=0;i<n;i++){
					printf("Ingrese nombres y apellidos: \n");
					scanf("%s %s %s",nombres[i].nombre1,nombres[i].nombre2,nombres[i].apellido);
					nombres[i].nombre1[0]=toupper(nombres[i].nombre1[0]);
					j=1;
					while(nombres[i].nombre1[j]!='\0'){
						nombres[i].nombre1[j]=tolower(nombres[i].nombre1[j]);
						j++;
					}
					j=1;
					while(nombres[i].nombre2[j]!='\0'){
						nombres[i].nombre2[j]=tolower(nombres[i].nombre2[j]);
						j++;
					}
					j=1;
					while(nombres[i].apellido[j]!='\0'){
						nombres[i].apellido[j]=tolower(nombres[i].apellido[j]);
						j++;	
					}
				}
				//repetir para nombre2 y .apellidos
				break;
			case 2:
			    printf("Ingrese otro nombre:");
			    scanf("%s",otro); con=0;
			    for(i=0;i<n;i++){
					if(strcmp(otro,nombres[i].nombre2)==0){
						con++;
					}
					printf("Cantidad: %i \n",con);
					break;
			    }
			case 3:
				for(i=0;i<n;i++){
					printf("Alumno: %s %c %s \n",nombres[i].nombre1,nombres[i].nombre2[0],nombres[i].apellido);	
				}
				break;
		}
	} while(opc!=0);
	
	return 0;
}

