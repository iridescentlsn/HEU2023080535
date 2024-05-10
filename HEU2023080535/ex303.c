#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
	int i;
	int x=1;
	for(i=0;i<=8;i++){
		x=(x+1)*2; 
	}
	printf("%d",x);
	return 0;
}

