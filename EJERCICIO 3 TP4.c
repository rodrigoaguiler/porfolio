#include <stdio.h>
#define TANMAX 50
int main() {
	printf("Ingrese la cantidad de elementos: ");
	int n,i,ELEMENTOS[TANMAX];
	scanf("%i",&n);
	
	printf("Carga de Elementos \n");
	printf("------------------ \n");
	i=0;
	while(i<n){
		scanf("%i",&ELEMENTOS[i]);
		i+=1;
	}
	
	printf("ELEMENTOS\n");
	printf("---------\n");
	i=0;
	while(i<n){
		printf("%i \t",ELEMENTOS[i]);
		i+=1;
	}
	
	return 0;
}

