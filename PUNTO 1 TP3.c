#include <stdio.h>
#include <math.h>
#define MAXFIL 100
#define MAXCOL 20
int main(){
	//INGRESO DE VARIABLES//
	int T1[MAXFIL][MAXCOL],T2[MAXFIL][MAXCOL],SUM[MAXFIL][MAXCOL];		 					//SUM[fil][col] es para la suma del inciso 1
	int COP1[MAXFIL][MAXCOL],COP2[MAXFIL][MAXCOL],SUM1[MAXFIL][MAXCOL],M[MAXFIL][MAXCOL];	 //SUM1[fil][col] es para la suma del inciso 2		
	int n,fil,col,p,k,q;																						
	printf("Ingrese el tamaño de la matriz \n");
	printf("------------------------------ \n");
	scanf("%i",&n);
	
	printf("Ingrese los numeros de la primer matriz \n");
	printf("--------------------------------------- \n");
	for(fil=0;fil<n;fil++){
		for(col=0;col<n;col++){
			scanf("%i",&T1[fil][col]);
		}
	}
	printf("Ingrese los numeros de la segunda matriz \n");
	printf("---------------------------------------- \n");
	for(fil=0;fil<n;fil++){
		for(col=0;col<n;col++){
			scanf("%i",&T2[fil][col]);
		}
	}
	
	printf("MATRIZ 1 \n");
	printf("-------- \n");
	for(fil=0;fil<n;fil++){
		for(col=0;col<n;col++){
			printf("%4i",T1[fil][col]);
		}
		printf("\n");
	}	
	printf("MATRIZ 2 \n");
	printf("-------- \n");
	for(fil=0;fil<n;fil++){
		for(col=0;col<n;col++){
			printf("%4i",T2[fil][col]);
		}
		printf("\n");
	}
	printf("INGRESE EL NUMERO P \n");	//INGRESO PRIMER NUMERO 
	printf("------------------- \n");
	scanf("%i",&p);
	
	printf("INGRESE EL NUMERO Q \n");	//INGRESO SEGUNDO NÚMERO
	printf("------------------- \n");
	scanf("%i",&q);
	
	for(fil=0;fil<n;fil++){
		for(col=0;col<n;col++){
			COP1[fil][col]=T1[fil][col]; COP2[fil][col]=T2[fil][col];
		}
	}
	//inciso 1//
	for(fil=0;fil<n;fil++){				//PRODUCTO DE MATRICES
		for(col=0;col<n;col++){
			T1[fil][col]*=p; T2[fil][col]*=q;
		}
	}
	printf("MATRIZ DESPUES DE MULTIPLICAR \n");	//MATRIZ MULTIPLICADA 
	printf("----------------------------- \n");
	for(fil=0;fil<n;fil++){
		for(col=0;col<n;col++){
			SUM[fil][col]=T1[fil][col]-T2[fil][col];
		}
	}
	for(fil=0;fil<n;fil++){
		for(col=0;col<n;col++){
			printf("%4i",SUM[fil][col]);
		}
		printf("\n");
	}
	//inciso 2//
	for(fil=0;fil<n;fil++){
		for(col=0;col<n;col++){
			SUM1[fil][col] = COP1[fil][col]+ COP2[fil][col];
		}
	}//FUNCIONA BIEN ESTO
	
	// (A + B) * A//
	
	for(fil=0;fil<n;fil++){
		for(k=fil;k<n;k++){
			M[fil][k]=COP1[fil][k]*SUM1[fil][k];
			printf("t[%i][%i] %i \t",k,col,M[fil][col]);
		}
	} 
	printf("\n");
	/*
	for(fil=0;fil<n;fil++){
		for(k=fil;k<n;k++){
				M[fil][col]=
		}
		col
	}*/
	printf("\n");
	printf("Inciso B \n");
	printf("-------- \n");
	for(k=0;k<n;k++){
		for(col=0;col<n;col++){
			printf("%4i",SUM1[k][col]);
		}
		printf("\n");
	}
	
	
	return 0;
}
	
	
	
