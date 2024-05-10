#include <stdio.h>
#include <stdlib.h>

#define N 65
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void sortbubble(int a[5]){
	int i,t,j;
	for(j=0;j<4;j++){
		for(i=0;i<4;i++){
		if((a[i])>a[i+1]){
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
	}
	}
}


int main(int argc, char *argv[]) {
	void sortbubble(int a[5]);
	int a[5];
	int i;
	for(i=0;i<5;i++){
		if(i==0){
			scanf("%d",&a[i]);
		}else{
			scanf(" %d",&a[i]);
		}
}
	printf("\n");
	sortbubble(a);
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	return 0;
}



