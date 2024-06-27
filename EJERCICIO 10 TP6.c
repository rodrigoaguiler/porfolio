#include <stdio.h>
int producto(int v1[],int v2[],int n, int acu);
int main() {
	int n=3,acu=0;
	int v1[]={3,4,8};
	int v2[]={2,1,3};
	printf("Producto Escalar:%i",producto(v1,v2,n,acu));
	return 0;
}
int producto(int v1[],int v2[],int n, int acu){
	if(n==0){
		return acu;
	}else{
		return producto(v1,v2,n-1,acu+(v1[n-1]*v2[n-1]));
	}
}
