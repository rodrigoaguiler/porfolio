#include <stdio.h>
void modulo1(int x);
int main() {
	int x;
	printf("Ingrese un numero: ");
	scanf("%i",&x);
	
	modulo1(x);
	return 0;
}
//TODOS LOS MODULOS VAN FUERA DEL MAIN//
void modulo1(int x);{
	int c=0;
	while(x!=0){
		x=x/10;
		c+=1;
	}
	printf("Tiene %i digitos: ",c);
};
void modulo3(int x,int *cd,int *dp){
	int d;c=0;p=0;
	while(x!=0){
		d=x%10;
		x/=10;
		c+=1;
		if((d==2)||(d==3)||(d==5)||(d==7)){
			p+=1;
		}
	}
	*cd=c;
	*cp=p;
}

