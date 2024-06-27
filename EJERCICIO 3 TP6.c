#include <stdio.h>
int producto(int a, int b);
int main() {
	int a=4,b=3;
	printf("%i",producto(a,b));
	return 0;
}
int producto(int a, int b){
	if(b==0){
		return 0;
	}else return a+producto(a,b-1);//preguntar esto
}
