#include <stdio.h>
#define TANMAX 100
int main(){
	int x,i,j,m,ban;
	int v[TANMAX];
	int f[TANMAX];
	printf("Ingrese n Numeros naturales: ");
	int n; scanf("%i",&n); m=0;
	printf(" Ingrese los numeros: \n");
	for(i=0;i<n;i++){
		scanf("%i",&x);
		j=0,ban=0;
		while(j<m && ban==0){
			if(x!=v[j]){
				j++;
			}else{
				ban=1;
			}
		}
		if(ban!=1){
			v[m]=x;
			f[m]=1;
			m++;
		}else{
			f[j]+=1;
		}
	}
	printf("El vector es: ");
	for(j=0;j<m;j++){
		printf("%4i ",v[j]);
	}
	printf("\n");
	printf("La frecuencia de aparición de cada uno es: ");
	for(j=0;j<m;j++){
		printf("%4i",f[j]);
	}
	return 0;
}
