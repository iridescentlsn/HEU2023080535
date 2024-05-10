#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define runnian(x) ((x%4==0&&x%100!=0)||x%400==0)?1:0

int main(int argc, char *argv[]) {
	int x;
	scanf("%d",&x);
	if(runnian(x)){
		printf("%d is a leap year",x);
	}else{
		printf("%d is not a leap year",x);
	}
	return 0;
}

