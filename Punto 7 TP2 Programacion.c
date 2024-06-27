#include <stdio.h>
#include <string.h>
#define TANMAX 100
typedef char CADENA[TANMAX];
int main(){
	//declaracion de variables
	int n,PAL,b=0,MAY,POS,i;
	char C;
	CADENA copia,PALABRAS[TANMAX];
	printf("Ingrese la cantidad de Cadenas \n");
	scanf("%i",&n);fgetc(stdin);
	for(i=0;i<n;i++){
		printf("Cadena N[%i]: ",i);
		gets(PALABRAS[i]);
	}
	//INCISO A
	int longmin;
	longmin=strlen(PALABRAS[0]);
	strcpy(copia,PALABRAS[0]);
	for(i=1;i<n;i++){
		if(longmin>strlen(PALABRAS[i])){
			longmin=strlen(PALABRAS[i]);
			strcpy(copia,PALABRAS[i]);
		}
	}
	printf("---------------------------------- \n");
	printf("La cadena de menor longitud es: %s ",copia);
	printf("\n");
	//INCISO B//
	int acu=0;
	printf("Ingrese un caracter C:  \n");
	scanf("%c",&C);
	
	for(i=0;PALABRAS[i]!='\0';i++){
		if(strchr(PALABRAS[i],C)&& b!=1){
			PAL=PALABRAS[i];
			acu++;
			MAY=acu;
			POS=i;
			b=1;
		}else{
			if(strchr(PALABRAS[i],C)){
				PAL=PALABRAS[i];
				acu++;				
			}
			if(acu>MAY){
				PAL=PALABRAS[i];
				POS=i;
			}
		}
		printf("CANTIDAD DE C[%i]: %c",i,acu);
	}
	return 0;
}

