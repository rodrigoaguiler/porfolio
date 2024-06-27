#include <stdio.h>
#include <string.h>
typedef char cadena[50];
int main() {
	int *nombre;
	cadena NOM;
	printf("Ingrese un nombre\n");
	fgets(NOM,50,stdin); NOM[strlen(NOM)-1]='\0';
	nombre=strlen(NOM);
	printf("--------------------\n");
	printf("Nombre ingresado: %i\n",*nombre);
	return 0;
}

