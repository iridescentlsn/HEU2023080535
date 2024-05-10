#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,x=0;
	for(i=100;i<1000;i++){
		x=(i/100)*(i/100)*(i/100)+(i/10%10)*(i/10%10)*(i/10%10)+(i%10)*(i%10)*(i%10);
		if(x==i){
			printf("%d\n",i);
		}
	}
	
	return 0;
}

