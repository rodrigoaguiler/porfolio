#include <stdio.h>
#include <string.h>
#define MAX 100
typedef char CADENA[MAX];
void leer(int *N,CADENA v[MAX]);
void vporpart(int N,CADENA v[MAX]);
int main() {
	int N,acu;
	printf("Ingrese la cantidad de provincias: \n");scanf("%i",&N);fgetc(stdin);
	CADENA v[MAX];
	leer(&N,v);
	//a
	vporpart(N,v);//votos por partido politico
	
	return 0;
}
void leer(int *N,CADENA v[]){
	int i,k,M,votos,vanulados;
	printf("Ingrese la provincia\n");
	for(i=0;i<*N;i++){
		printf("PROVINCIA:\n");fgets(v[i],50,stdin);v[i][strlen(v[i])-1]='\0';
		printf("Ingrese la cantidad de partidos politicos\n");scanf("%i",&M);fgetc(stdin);
		for(k=0;k<M;k++){
			printf("PARTIDO POLITICO: \n");fgets(v[k],50,stdin);v[k][strlen(v[k])-1]='\0';
			printf("Ingrese los votos totales\n");scanf("%i",&votos);
			printf("Ingrese los votos anulados\n");scanf("%i",&vanulados);fgetc(stdin);
		}
		
	}
	*N=N;
}
void vportpart(int N,CADENA v[100]){
	
}
