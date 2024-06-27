#include <stdio.h>
//RECURSION FINAL 

int main() {
	int V[4]){
	return 0;
}
int sumaVec(int V[],int n,int s){
	if(n<0)return(s);
	else return sumaVec(V,n-1,V[n]+s);
}
