#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define TANMAX 100

int main()
{
	//declaracion de variables
	int A[TANMAX],B[TANMAX],UNION[TANMAX],N,M,INTERSECCION[TANMAX];
	int i,j=0,k=0,l=0,b=0;
	printf("Ingrese la cantidad de numeros de los conjuntos A Y B: \n");
	scanf("%i",&N);
	scanf("%i",&M);
	
	//srand(time(NULL));//CODIGO QUE GENERA LOS NUMEROS ALEATORIOS
	printf("Elementos del primer conjunto\n");
	for(i=0;i<N;i++){
		scanf("%i",&A[i]);
	}
	
	printf("Elementos del segundo conjunto \n");
	for(i=0;i<M;i++){
		scanf("%i",&B[i]);
	}
	//UNION 
	for(i=0;i<N;i++){
		j=0;
		while(j<l && b==1){
			if(A[i]==UNION[j]){
				b=1;
			}
			j++;
		}
		if(b==1){
			UNION[l]=A[i];l++;
		}else b=0;
	}
	for(i=0;i<M;i++){
		j=0;
		while(j<l && b==1){
			if(A[i]==UNION[j]){
				b=1;
			}
			j++;
		}
		if(b==1){
			UNION[l]=A[i];l++;
		}else b=0;
	}
	for(i=0;i<l;i++){
		printf("| %i |",UNION[i]);
	}
	
	//DISYUNCION
	i=0;j=0;k=0;
	while(i<N-1){
		for(j=i;j<M;j++){
			if(A[i]==B[j]){
				INTERSECCION[k]=A[i];k++;
			}else{j+=1;}
		}
		i+=1;
	}
	for(i=0;i<k;i++){
		printf("| %i |",INTERSECCION[i]);
	}
	//mostrar A-B
	/*if(M==N){
		while(
	}*/
	return 0;
}









