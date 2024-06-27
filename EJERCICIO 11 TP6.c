#include <stdio.h>
#include <string.h>
typedef char cadena[50];
void invertirCad(cadena cad, cadena inv, int i);
int main() {
	printf("CADENA A INVERTIR:");cadena cad;gets(cad);
	cadena inv;
	invertirCad(cad,inv,0);//el parametro o el 0(cero) es el inicio del void
	int i;
	printf("CADENA INVERTIDA: %s",inv);
	return 0;
}
void invertirCad(cadena cad, cadena inv, int i){
	if(cad[i]=='\0'){
		inv[i]='\0';
	}else{
		inv[i]=cad[strlen(cad)-1-i];
		invertirCad(cad,inv,i+1);
	}
}
