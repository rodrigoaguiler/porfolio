#include <stdio.h>
#include <string.h>
typedef char cadena[50];
int cantpalab(cadena cad,int i,int acu);
int main() {
	cadena cad;int i=1,acu=1;
	printf("Ingrese la cadena: ");fgets(cad,50,stdin);cad[strlen(cad)-1]='\0';
	printf("Cantidad de palabras: %i",cantpalab(cad,i,acu));
	return 0;
}
int cantpalab(cadena cad,int i,int acu){
	if(cad[i]=='\0'){
		return acu;
	}else{
		if(cad[i]==' ' && cad[i-1]!=' ') return cantpalab(cad,i+1,acu+1);
		else return cantpalab(cad,i+1,acu);
	}
}
