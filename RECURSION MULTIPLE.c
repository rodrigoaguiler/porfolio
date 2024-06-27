#include <stdio.h>
//ocurre cuando la activacion de una funcion puede provocar mas de una activacion recursiva de la misma
//sucesion fibonachi 0,1,1,2,3,5,8,13,21,...
//A0=0;a1=1;an=an-1+an-2, para N>=2;
int Fibonacci(int n);
int main() {
	int n=8;
	printf("%i",Fibonacci(n));
	return 0;
}
int Fibonacci(int n){
	if(n==0)return(0);
	else
		if(n==1)return(1);
		else return(Fibonacci(n-1)+Fibonacci(n-2));
	
}
