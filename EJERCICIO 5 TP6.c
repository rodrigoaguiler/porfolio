#include <stdio.h>
typedef enum booleano{falso,cierto};
int Factorial(int num);
int curioso(int num, int x, int acu);
int main() {
	int num=145,x=0,acu=0;
	printf("%c",curioso(num,x,acu));
	return 0;
}
int Factorial(int num){
	if(num==0){
		return 1;
	}else return num* Factorial(num-1);
}
int curioso(int num, int x, int acu){
	if(x==0){
		if(acu==num){
			return cierto;
		}else return falso;
	}else{
		return curioso(num,x/10,acu+Factorial(x%10));
	}
}
