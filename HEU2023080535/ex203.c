#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float value(int x){
	float y;
	if(x<=125){
		y=100;
	}
	else if(x>125&&x<=200){
		y=x*0.8;
	}
	else if(x>200&&x<=300){
		y=200*0.8+(x-200)*0.9;
	}
	else if(x>300&&x<=450){
		y=200*0.8+100*0.9+(x-300)*1;
	}
	else{
		y=(200*0.8+100*0.9+(x-300)*1)*(1+0.15);
	}
	return y;
}


int main(int argc, char *argv[]) {
	float value(int x);
	int x;
	scanf("%d",&x);
	value(x);
	printf("%.2f",value(x));
	return 0;
}

