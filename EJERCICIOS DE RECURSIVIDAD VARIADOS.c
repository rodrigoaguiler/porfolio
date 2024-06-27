#include <stdio.h>
#include <string.h>
#include <ctype.h>
typedef enum{FALSO,CIERTO}BOOLEANO;
typedef char CADENA[50];
//DECLARACION DE PROTOTIPOS
BOOLEANO esVocal(char car);

int cantVocalesIND(CADENA cad);
	
int cantVocalesRec(CADENA cad, int i);

BOOLEANO esPalindromoRec(CADENA cad,int n,int i);

int longIND(CADENA cad);

int longRec(CADENA cad, int i);

BOOLEANO esPalindromoIND(CADENA cad);

BOOLEANO esPrefijoIND(CADENA pre,CADENA cad);
	
BOOLEANO esPrefijoRec(CADENA pre,CADENA cad,int i);
int main() {
	CADENA cad,pre;
	strcpy(cad,"Bienvenidos");
	strcpy(pre,"dos");
	printf("Longitud: %i \n",longIND(cad));
	printf("Vocales: %i n",cantVocalesIND(cad));
	printf("%s es palindromo? %s \n",cad,esPalindromoIND(cad)?"SI":"NO");
	printf("%s es prefijo de %s ? %s \n",pre,cad,esPrefijoIND(pre,cad)? "SI":"NO");
	return 0;
}

int cantVocalesIND(CADENA cad){
	return cantVocalesRec(cad,0);
}
int cantVocalesRec(CADENA cad,int i){
	if(cad[i]='\0'){
		return 0;
	}else{
		if(esVocal(cad[i]))
		   return 1 + cantVocalesRec(cad,i+1);
		else 
			return cantVocalesRec(cad,i+1);
	}
}

BOOLEANO esVocal(char car){
	car = toupper(car);
	return (car=='A' || car=='E' || car=='I' || car=='O' || car=='U'); 
}
	
BOOLEANO esPalindromoIND(CADENA cad){
	return esPalindromoRec(cad,strlen(cad),9);
}
BOOLEANO esPalindromoRec(CADENA cad,int n,int i){
	if(cad[i]!=cad[n-1-i]){
		return FALSO;
	}else{
		if(i==(n/2)){
			return CIERTO;
		}else return esPalindromoRec(cad,n,i+1);
	}
}
int longIND(CADENA cad){
	return longRec(cad,0);
}
int longRec(CADENA cad, int i){
	if(cad[i]=='\0'){
		return 0;
	}else{
		return 1+ longRec(cad,i+1);
	}
}

BOOLEANO esPrefijoIND(CADENA pre,CADENA cad){
	return esPrefijoRec(pre,cad,0);
}

BOOLEANO esPrefijoRec(CADENA pre,CADENA cad,int i){
	if(pre[i]=='\0'){
		return CIERTO;
	}else{
		if(pre[i]!=cad[i]){
			return FALSO;
		}else return esPrefijoRec(pre,cad,i+1);
	}
}

