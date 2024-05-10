#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,m,n,k=0;
	scanf("%d,%d",&m,&n);
	for(i=m;i<=n-2;i++){
		for(j=2;j<i;j++){
		int t;
		t=i%j;
		if(t==0){
			break;
		}
		}
		if(j==i){
			for(k=2;k<i+2;k++){
				int h;
		        h=(i+2)%k;
		        if(h==0){
			    break;
		    }
		    }
		    if(k==i+2){
		    	printf("%d,%d\n",i,i+2);
			}
	}
	}
	return 0;
}




