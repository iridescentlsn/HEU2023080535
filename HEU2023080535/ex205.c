#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float w,x;
	scanf("%f",&w);
	if(w<=500){
		x=w;
	}
	else if(w>500&&w<=1000){
		x=w*0.9;
	}
	else if(w>1000){
		x=w*0.8;
	}
	printf("%.2f",x);
	return 0;
}

