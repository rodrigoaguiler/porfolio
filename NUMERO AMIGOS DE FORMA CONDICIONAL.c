#include <stdio.h>

int main() {
	int i,acu1=0,acu2=0;
	int x,y;
	printf("Ingrese el primer numero: \n");
	scanf("%i",&x);
	printf("Ingrese el segundo numero: \n");
	scanf("%i",&y);
	i=1;
	while(i<x){
		if(x%i==0){
			acu1+=i;
		}
		i+=1;
	}
	i=1;
	while(i<y){
		if(y%i==0){
			acu2+=i;
		}
		i+=1;
	}
	if(acu1==acu2){
		printf("%i y %i Son numerosa amigos \n",x,y);
	}else{
		printf("%i y %i no son numeros amigos \n",x,y);
	}
	return 0;
}

