#include <stdio.h>
#include <string.h>
#define MAXFIL 100
typedef char CADENA[30];

int main(){
	CADENA aux,t[MAXFIL][2],buscado;
	int FIL,COL,m,i,b,j,k,falso=0,cierto=0;
	printf("Ingrese la cantidad de Filas\n");
	scanf("%i",&m);
	for(FIL=0;FIL<m;FIL++){	//inciso A
		printf("Pais: ");
		fgets(t[FIL][0],30,stdin);fgetc(stdin); //"ARGENTINA ENTER(REEMPLAZAMOS CON \0)//
		t[FIL][0][strlen(t[FIL][0])-1]='\0';
		printf("Capital: ");
		fgets(t[FIL][1],30,stdin);fgetc(stdin);
		t[FIL][1][(strlen(t[FIL][1])-1)]='\0';
	}
	for(i=0;i<m-1;i++){
		for(j=i+1;j<m;j++){
			if(strcmp(t[i][0],t[j][0])>0){
				/*intercambio aux=v[i];
				v[i]=v[j];v[j]=aux*/
				for(k=0;k<2;k++){
					strcpy(aux,t[i][k]);
					strcpy(t[i][k],t[j][k]);
					strcpy(t[j][k],aux);
				}
			}
		}
	}
	//ilustrar tabla
	printf("MATRIZ \n");
	printf("------ \n");
	for(FIL=0;FIL<m;FIL++){
		for(COL=0;COL<2;COL++){
			printf("%4s",t[FIL][COL]);
		}
		printf("\n");
	}
	//inciso c
	
	printf("------------- \n");
	printf("Pais a buscar \n");
	printf("------------- \n");
	fgets(buscado,30,stdin);fgetc(stdin);
	buscado[strlen(buscado)-1]='\0';
	b=falso;FIL=0;
	while(FIL<m && b==falso){
		if(t[FIL][0]== buscado){
			b=cierto;
		}else{
			FIL+=1;
		}
	}
	if(b==cierto){
		printf("Su capital es:| %s |\t",t[FIL][1]);
		printf("\n");
	}else{
		printf("No se encuentra");
	}
	return 0;
}
