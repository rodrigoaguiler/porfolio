#include <stdio.h>
int mayor(int v[],int n);
int mayorRec(int v[],int n,int posMay);
int main() {
	int n=5,posMay=0;
	int v[]={4,13,1,5,8};
	printf("El mayor numero es:%i",mayorRec(v,n,posMay));
	return 0;
}
//menor( [4,13,1,5,8] ---> 1
int mayor(int v[],int n){
	return mayorRec(v,n,0);
}
int mayorRec(int v[],int n,int posMay){
	if(n==0){
		return v[posMay];//caso base;
	}else{
		//caso general
		if(v[n-1]>v[posMay]){
			posMay=n-1;		
		}
		return mayorRec(v,n-1,posMay);
	}
}
