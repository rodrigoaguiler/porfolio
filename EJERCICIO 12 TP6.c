#include <stdio.h>
#include <string.h>
typedef char CADENA[50];
int repeticiones(CADENA cad,char c,int i,int acu);
int main() {
	CADENA cad;
	strcpy(cad,"rodrigo tomas aguilera");
	char c;c='a';
	int i=0,acu=0;
	printf("El caracter se repite:%i veces",repeticiones(cad,c,i,acu));
	return 0;
}
int repeticiones(CADENA cad,char c,int i,int acu){
	if(cad[i]=='\0'){
		return acu;
	}else{
		if(cad[i]==c)return repeticiones(cad,c,i+1,acu+1);
		else return repeticiones(cad,c,i+1,acu);
	}
		
}
