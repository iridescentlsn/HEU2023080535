#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int hanshu(int x){
	if(x>=3){
		return hanshu(x-1)+hanshu(x-2);
	}else{
		return 1;
	}
}

int main(int argc, char *argv[]) {
	int hanshu(int x);
	int n,i;
	double he=0;
	double y=0;
	scanf("%d",&n);
		for(i=1;i<=n;i++){
			y=(float)hanshu(i+2)/hanshu(i+1);
			he=he+y;
	}
	printf("%.2f",he);
	return 0;
}


