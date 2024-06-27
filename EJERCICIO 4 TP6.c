#include <stdio.h>
int invertido(int num, int inv); 
int main() {
	int num=4568,inv=0;
	printf("%i",invertido(num,inv));
	return 0;
}
/*while(num>0){
dig=num%10;
inv=inv*10+dig;
num/=10;
}
*/
int invertido(int num,int inv){
	if(num==0){  
		return inv;
	}else return invertido(num/10,inv*10+(num%10));
	
}

