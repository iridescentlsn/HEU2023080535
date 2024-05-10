#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int wanshu(int x){
	int i=0;
	int he=1;
	if(x==1){
		return 0;
	}else{
		for(i=2;i<x;i++){
		if(x%i==0){
			he=he+i;
		}
		
	    }
	    if(x==he){
		    return 1;
	    }else{
		    return 0;
	}
	}
	
}
int main(int argc, char *argv[]) {
	int wanshu(int x);
	int m,n,t,i;
	scanf("%d,%d",&m,&n);
	if (m>n){
			t=m;
			m=n;
			n=t;
		}
	if(m<=9999&&n<=9999&&m>0&&n>0){
		int c=0;
		for(i=m;i<=n;i++){
			if(wanshu(i)==1){
				c=c+1;
				if(c==1){
					printf("%d",i);
				}else{
					printf(",%d",i);
				}
			}
		}
	}else{
		printf("error");
		
	}
	
	
	
	
	return 0;
}

