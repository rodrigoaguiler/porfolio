#include <stdio.h>
void amigos(int num,int num2);
int main(){
	int num,num2;
	printf("Ingrese los dos numeros: \n");
	scanf("%i %i",&num,&num2);
	amigos(num,num2);
	return 0;
}
	void amigos(int num,int num2){
		int sum=0,sum2=0,i;
		for(i=1;i<num;i++){
			if(num%i==0)
				sum=sum+i;
		}
		for(i=1;i<num2;i++){
			if(num2%i==0)
				sum2=sum2+i;
		}
		if((sum2==num)&&(sum==num2)){
			printf("\n%i y %i son numeros amigos.\n",num,num2);
		}else{
			printf("\n%i y %i no son numeros amigos.\n",num,num2);
		}
	}
