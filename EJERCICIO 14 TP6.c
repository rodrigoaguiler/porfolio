#include <stdio.h>
#include <string.h>
typedef char CADENA[50];
typedef enum{FALSO,CIERTO}BOOLEANO;
BOOLEANO esPrefijoRec(CADENA pre, CADENA cad, int i);
BOOLEANO esPrefijo(CADENA pre,CADENA cad);
int main() {
	CADENA cad;
	strcpy(cad,"abcd");
	CADENA pre;
	strcpy(pre,"ab");
	printf("%s es prefijo de %s ? %s \n",pre,cad,esPrefijo(pre,cad)?"SI":"NO");
	return 0;
}
BOOLEANO esPrefijo(CADENA pre,CADENA cad){
	return esPrefijoRec(pre,cad,0);
}
BOOLEANO esPrefijoRec(CADENA pre, CADENA cad, int i){
	if(pre[i]=='\0'){
		return CIERTO;
	}else{
		if(pre[i]!=cad[i]){
			return FALSO;
		}else return esPrefijoRec(pre,cad,i+1);
	}
}
