#include <stdio.h>
int sacardigitos(int n,int suma);
int main() {
	int suma=0,n;
	n=105;
	printf("%i",sacardigitos(n,suma));
	return 0;
}
int sacardigitos(int n,int suma){
	if(n==0)return suma; 
	else return sacardigitos(n/10,suma+n%10);
}
