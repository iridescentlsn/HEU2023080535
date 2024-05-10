#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int jiou(int x){
	if(x%2==0){
		return 1;
	}else{
		return 0;
	}
}


int main(int argc, char *argv[]) {
	int jiou(int x);
	int i=0;
	int a[8];
	int he=0;
	for(i=0;i<=7;i++){
		if(i<7){
			scanf("%d ",&a[i]);
		}else{
			scanf("%d",&a[i]);
		}
		if(jiou(a[i])==1){
			he=he+a[i];
		}
	}
	printf("%d",he);
	
	
	return 0;
}

