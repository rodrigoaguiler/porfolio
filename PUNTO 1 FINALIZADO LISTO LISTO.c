#include <stdio.h>
#include <math.h>
#define MAXFIL 100
#define MAXCOL 20
int main(){
	//INGRESO DE VARIABLES//
	int INCISO3[MAXFIL][MAXFIL],INCISO31[MAXFIL][MAXCOL];
	int T1[MAXFIL][MAXCOL],T2[MAXFIL][MAXCOL],SUM[MAXFIL][MAXCOL],SUM3[MAXFIL][MAXCOL];		 					//SUM[fil][col] es para la suma del inciso 1
	int COP1[MAXFIL][MAXCOL],COP2[MAXFIL][MAXCOL],SUM1[MAXFIL][MAXCOL],M[MAXFIL][MAXCOL];	 //SUM1[fil][col] es para la suma del inciso 2		
	int n,fil,col,copP,copQ,p,k,q;																						
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
	copP=p;
	
	printf("INGRESE EL NUMERO Q \n");	//INGRESO SEGUNDO NÚMERO
	printf("------------------- \n");
	scanf("%i",&q);
	copQ=q;
	
	for(fil=0;fil<n;fil++){
		for(col=0;col<n;col++){
			COP1[fil][col]=T1[fil][col]; COP2[fil][col]=T2[fil][col];
		}
	}
	for(fil=0;fil<n;fil++){
		for(col=0;col<n;col++){
			INCISO3[fil][col]=T1[fil][col]; INCISO31[fil][col]=T2[fil][col];
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
	
	for (fil = 0; fil < n; fil++) {
		for (col = 0; col < n; col++) {
			M[fil][col] = 0;
			for (k = 0; k < n; k++){
				M[fil][col] += SUM1[fil][k] * COP1[k][col];
			}	
		}	
	}
	
	printf("\n");
	printf("Inciso B \n");
	printf("-------- \n");
	for(fil=0;fil<n;fil++){
		for(col=0;col<n;col++){
			printf("%4i",M[fil][col]);
		}
		printf("\n");
	}
	copQ=-1*q;
	copP=2*p;
	printf(" P[%i] Q[%i] ",copP,copQ);
	//INCISO 3//
	for(fil=0;fil<n;fil++){
		for(col=0;col<n;col++){
			INCISO3[fil][col]*=copQ; INCISO31[fil][col]*=copP;
		}
		printf("\n");
	}
	//ESTO ESTA BIEN//
	for(fil=0;fil<n;fil++){
		for(col=0;col<n;col++){
			SUM3[fil][col]=INCISO3[fil][col]+ INCISO31[fil][col];
		}
		//printf("VALOR[%i][%i]= %i \t",fil,col,SUMA3[fil][col]);//
	}
	printf("Inciso 3\n");
	printf("--------\n");
	for(fil=0;fil<n;fil++){
		for(col=0;col<n;col++){
			printf("%4i",SUM3[fil][col]);	
		}
		printf("\n");
	}
	return 0;
}
	
