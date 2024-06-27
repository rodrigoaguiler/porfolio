#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TANMAX 20
int main() {
	//declaracion de variables
	int n,fil,col,T[TANMAX][TANMAX];
	int aleatorio,ini=1,fin=4;
	printf("---------------------------\n");
	printf("Ingrese el rango de numeros de la matriz\n");	//ingreso de tamaño de matriz
	srand(time(0));
	
	printf("Ingrese el limite inferior \n");
	printf("--------------------------- \n");
	scanf("%i",&ini);
	
	printf("Ingrese el limite superior \n");
	printf("-------------------------- \n");
	scanf("%i",&fin);
	n=fin;
	
	for(fil=0;fil<n;fil++){
		for(col=0;col<n;col++){
			aleatorio=rand()%(fin+1-ini)+ini;
			printf("T[%i][%i]: %i \n",fil,col,T[fil][col]);
		}
	}
	printf("MATRIZ \n");
	printf("----- \n");
	for(fil=0;fil<n;fil++){
		for(col=0;col<n;col++){
			printf("%4i",T[fil][col]);
		}
		printf("\n");
	}
	
	return 0;
}

