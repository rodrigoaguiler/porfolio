#include <stdio.h>
#include <string.h>
typedef char cadena[50];
int main() {
	/*char *ptr;
	int longi;
	int n=0,b;
	*/
	cadena nombres;
	int i=0;
	char nombre;
	printf("VERSION SIN PUNTEROS\n");
	nombres=fgetc(stdin);
	while(nombres!='\n'){
		printf("-------------------------------\n");
		printf("Ingrese nombres de personas\n");
		cadena[i]=nombre;
		i+=1;
		nombres=fgetc(stdin);
		/*fgets(nombres,40,stdin); nombres[strlen(nombres)-1]='\0'; 
		longi=strlen(nombres);
		printf("Nombre: %s \n",nombres);
		printf("Longitud: %i\n",longi);*/
		printf("--------------------------------------------\n");
	}
	cad[i]='\0';
	return 0;
}

