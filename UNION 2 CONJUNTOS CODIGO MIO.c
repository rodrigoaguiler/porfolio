#include <stdio.h>
#include <string.h>

#define TANMAX 100

int main()
{
	//declaracion de variables
	int A[TANMAX],B[TANMAX],UNION[TANMAX],N,M;
	int i,k,j,l,BAN=0,BAN2=0,total;
	printf("Ingrese la cantidad de numeros de los conjuntos A Y B: \n");
	scanf("%i",&N);
	scanf("%i",&M);
	total=N+M;
	
	printf("Elementos del primer conjunto\n");
	for(i=0;i<N;i++){
		scanf("%i",&A[i]);
	}
    
	printf("Elementos del segundo conjunto \n");
	for(j=0;j<M;j++){
		scanf("%i",&B[j]);
	}
	//salidad de los conjuntos
	for(i=0;i<N;i++){
		printf("| %i |\t",A[i]);
		UNION[l]=A[i];
		l++;
	}
	for(j=0;j<M;j++){
		printf("| %i |\t",B[j]);
		UNION[l]=B[j];
		l++;
	}
	//Uniones de los conjunto
	printf("\n");
	printf("La union es la siguiente \n");
	k=0;
	while(k<(N+M)){
		while(i<N){
			while(j<M && BAN==0){
				if(A[i]!= B[j]){
					UNION[l]=A[i];
					l++;
					UNION[l]=B[j];
					l++;
				}else{
					BAN=1;
					if(A[i]==B[j]){
						while(i<l && BAN2==0){
							if(UNION[l]==A[i]){
								j++;
							}
						}
					}
				}
			}
		}
	}
	for(i=0;i<l;i++){
		printf("\n | %i |\t",UNION[i]);
	}
	return 0;
}
