#include <stdio.h>
int mayorV1(int v[], int n,int may);
int main(int argc, char *argv[]) {
	
	return 0;
}
int mayorV1(int v[], int n,int may){
	if(n==0){
		return may;
	}else{
		if(v[n]>may){
			return mayorV1(v,n-1,v[n]);
		}else{
			return ma
		}
	}
}
