#include <stdio.h>
int primo(int k,int l);
int main() {
	int k=13,l=1;
	printf("PRIMO: %i",primo(k,l));
	return 0;
}
int primo(int k,int l){	//modulo recursivo primo
	/*for(i=0;i<k;i++){
	if(k%i==0){
	acu+=1:
	}
	if(acu==2){
	return k;
	}*/
	int acu=0;
	if(l==k){
		if(acu!=2)return 0;
		else return k;
	}else{
		if(k%l!=0){
			return 0;
		}else{ 
			acu+=1;
			return primo(k,l+1);
		}
	}
}
