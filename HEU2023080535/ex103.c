#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float a;
	float b;
	int c;
	int d;
	
	scanf("%f,%f,%d,%d",&a,&b,&c,&d);
	
	float fee;
	fee=(a-b)/c;
	float cost;
	cost=a-fee*d;
	
	printf("%.2f,",fee);
	printf("%.2f",cost);
	return 0;
}



