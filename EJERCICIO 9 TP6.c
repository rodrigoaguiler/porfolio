#include <stdio.h>
typedef enum{Falso,Cierto}booleano;
booleano decreciente(int v[],int n);
int main() {
	int n=3;
	int v[]={9,8,2};
	printf("Salida %s",decreciente(v,n)==1?"Cierto":"Falso");
}
booleano decreciente(int v[],int n){
	if(n==1){
		return Cierto;
	}else{
		if(!(v[n-2]>v[n-1])){
			return Falso;
		}else return decreciente(v,n-1);
	}
}

