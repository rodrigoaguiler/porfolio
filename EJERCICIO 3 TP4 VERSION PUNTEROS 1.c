#include <stdio.h>
#define TANMAX 50
int main() {
	int n,i,V[TANMAX];
	int *ptr,*ptrFinal;	//inicio y fin del ciclo for de punteros//
	printf("Ingrese la cantidad de numeros: \n");
	scanf("%i",&n);
	printf("Ingrese los numeros \n");
	i=0;
	while(i<n){
		scanf("%i",&V[i]);
		i+=1;
	}
	ptr=V;
	ptrFinal=ptr+n;
	printf("VECTOR\n");
	while(ptr<ptrFinal){
		printf("%i \t",(*ptr));
		ptr+=1;
	}
	
	return 0;
}

 
