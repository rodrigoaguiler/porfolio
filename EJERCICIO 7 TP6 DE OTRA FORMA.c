#include <stdio.h>
int sumaMultiplos(int V[],int n, int x, int acu);
int main() {
	int n=5,x=1,acu=0,k=4;
	int V[]={3,20,15,13,8};
	printf("Suma de multiplos de %i: %i",k,sumaMultiplos(V,n,x,acu));
	return 0;
}
int sumaMultiplos(int V[],int n, int x, int acu){
	if(n==0){
		return acu;
	}else{
		if(V[n-1]%x==0){
			return sumaMultiplos(V,n-1,x,acu+V[n-1]);
		}else{
			return sumaMultiplos(V,n-1,x,acu);
		}
	}
}
