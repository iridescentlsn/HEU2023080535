#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	int y;
	scanf("%d",&x);
	if (x<0||x%2==0){
		 y=x*x;
	}else{
		y=x/2;
	}
	printf("%d",y);

	return 0;
}

