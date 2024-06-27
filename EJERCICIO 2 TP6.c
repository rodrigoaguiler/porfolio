#include <stdio.h>
int digitos(int n);
int main() {
	int n=103;
	printf("numero 103: %i \t",digitos(n));
	return 0;
}
int digitos(int n){
	if(n!=1){
		return 1+digitos(n%10);//caso base obligatorio cuando nos se cumple la condicion
	}else{
		return 0;
		
	}
	
}
