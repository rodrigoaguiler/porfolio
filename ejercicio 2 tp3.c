#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAXFIL 10
#define MAXCOL 10

int main() {
	//declaracion de variables
	int MATRIZ[MAXFIL][MAXCOL],n,fil,col,POS;
	printf("ORDEN ALEATORIA \n"); //ingreso de orden
	srand(time(0));//semilla para generar los numeros aleatorios
	n=rand() % 10;
	printf("-------------------------- \n");
	printf("%i \n",n);
	
	for(fil=0;fil<n;fil++){
		if(fil==0){
			MATRIZ[0][fil]=rand()% n + 1;
		}else{
			for(col=0;col<n;col++){
			MATRIZ[fil][col]=MATRIZ[0 ][col];
			}
		}
		
	}
	/*
	//INTERCAMBIO DE CELDAS//
	for(fil=0;fil<n;fil++){
		POS=MATRIZ[fil][n];col=1;
		for(col=0;col<n;col++){
			MATRIZ[fil][col]=MATRIZ[fil][n-1+col];
		}
		MATRIZ[fil][0]=POS;
	}	
	*/
	
	printf("MATRIZ GENERADA \n");
	printf("--------------- \n");
	for(fil=0;fil<n;fil++){
		for(col=0;col<n;col++){
			printf("%4i ",MATRIZ[fil][col]);
		}
		printf("\n");
	}
	
	
	return 0;
}

