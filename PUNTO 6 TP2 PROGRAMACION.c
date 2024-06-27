#include <stdio.h>
#include <string.h>
#define TANMAX 100
typedef char CADENA[TANMAX];
int main()
{
	char c1,c2;
	int i, longitud;
	CADENA FRASE,FRASE2;
	printf("Ingrese una frase\n");// INGRESO DE FRASE//
	printf("-----------------\n");
	gets(FRASE);
	longitud=strlen(FRASE);
	printf("La longitud de la frase es %i \n",longitud);
	//PRIMER CARACTER//
	printf("Ingrese el caracter que desea cambiar: \n");
	scanf("%c",&c1);fgetc(stdin);
	//INGRESO SEGUNDO CARACTER//
	printf("Ingrese el caracter que raemmplazara:\n");
	scanf("%c",&c2);fgetc(stdin);
	strcpy(FRASE2,FRASE);//COPIA DE LA FRASE//
	
	for(i=0;FRASE2[i]!='\0';i++){
		if(FRASE2[i]==c1){
			FRASE2[i]=c2;
		}
	}
	puts(FRASE2);
	
	
	return 0;
}

