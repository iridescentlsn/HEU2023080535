#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float profit(float money,float rateyear,int n){
	if(n==0){
		return 0;
	}else{
		float ratemonth=1+rateyear/12;
		float x=(money+profit(money,rateyear,n-1))*ratemonth;
		return x;
	}
}

int main(int argc, char *argv[]) {
float profit(float money,float rateyear,int n);
	int n;
	float money;
	float rateyear;
	scanf("%f,%f,%d",&money,&rateyear,&n);
	printf("%.2f",profit(money,rateyear,n));
	return 0;
}

