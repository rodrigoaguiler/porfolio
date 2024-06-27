#include <stdio.h>
#include <string.h>
#define TANMAX 100
typedef char cadena[50];
void moduloingreso(int *n,cadena CARACTERES[]);
void mostrarcaracter(int *n,cadena CARACTERES[]);
void longitud(int n);


int main(){
	cadena CARACTERES[TANMAX];
	int n;
	//ingreso//
	moduloingreso(&n,CARACTERES);
	//salida//
	mostrarcaracter(&n,CARACTERES);
	return 0;
}
void moduloingreso(int *n,cadena CARACTERES[]){
	int i;
	printf("Ingrese la cantidad de caracteres \n");
	scanf("%i",n);fgetc(stdin); 
	printf("ingreso de caracteres en vector \n");
	for(i=0;i<(*n);i++){
		gets(CARACTERES[i]);
	}
}

void mostrarcaracter(int n,cadena CARACTERES[]){
	int i=0;
	printf("-----------\n");
	while(CARACTERES[i]!='\0'){
		if(i>0 && ((CARACTERES[i]==' ' || (CARACTERES[i]=='.'  || CARACTERES[i]==';')&&(CARACTERES[i-1]!=' '||CARACTERES[i-1]!=';' ||CARACTERES[i-1]!='.')){
			printf("%s",CARACTERES[i]);
		}
		i+=1;
		
	}

}
