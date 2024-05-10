#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,i,j,t=0;
	scanf("%d",&a);
	if(a>=3&&a<=10){
		for(i=0;i<=5;i++){
			j=(a+3*i)*(a+3*i)*(a+3*i)*(a+3*i);
			t=t+j;
		}
		printf("%d",t);
	}else{
		printf("error");
	}
	return 0;
}

