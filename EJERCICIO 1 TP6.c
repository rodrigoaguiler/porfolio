#include <stdio.h>
int division_norecursiva(int a,int b);
int division_recursiva(int a,int b);
int main() {
	int a=6,b=3;
	
	printf("NO RECURSIVO: %i\n",division_norecursiva(a,b));
	printf("---------------------------------------------\n");
	printf("RECURSIVA: %i\n",division_recursiva(a,b));
	return 0;
}
int division_norecursiva(int a,int b){
	int c;
	if(b!=0){
		c=a/b;
	}else return 0;
	
}
int division_recursiva(int a,int b){
	if(a-b<0){
		return 0;
	}else return 1+division_recursiva(a-b,b) ;
}
