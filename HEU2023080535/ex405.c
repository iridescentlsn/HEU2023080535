#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float p(int n,int x){
	if(n>1){
		return ((2*n-1)*x-p(n-1,x)-(n-1)*p(n-2,x))/n;
	}else if(n==1){
		return x;
	}else if(n==0){
		return 1;
	}
}

int main(int argc, char *argv[]) {
	float p(int n,int x);
	int x,n;
	scanf("%d,%d",&n,&x);
	if(n<0){
		printf("error");
	}else{
		printf("%.2f",p(n,x));
	}
	return 0;
}




