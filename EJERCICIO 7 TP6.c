#include <stdio.h>
/*int producto(int k, int x);*/
int sumaMultiplo(int V[],int n,int k);
int main(){
	int k,n=5;
	printf("Ingrese el numero k:");scanf("%i",&k);
	int V[]={3,20,15,13,8};
	printf("\nSuma de multiplos de %i: %i",k,sumaMultiplo(V,n,k));
	return 0;
}
	int sumaMultiplo(int V[],int n,int k){
		if(n==0){
			return 0;
		}else{//n-1 trabajo con el elemento
			if(V[n-1]%k==0){
				return V[n-1]+sumaMultiplo(V,n-1,k);
			}else return sumaMultiplo(V,n-1,k);
		}
	}
/*	
int producto(int k, int x){//modulo de producto
	if(x==0){
		return 0;
	}else return x+producto(k,x-1);//preguntar esto
}
int sumaMultiplo(int V[],int k, int n,int ){
	int i,l,acu;
	if(i==n){
		return 0;//caso base
	}else{
		if(k==V[i]){
			return acu+ sumaMultiplo(V,k,n);
		}else{
			return producto(k,l+1);
		}
	}
}*/
