#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	char a[5];
	scanf("%c%c%c%c%c",&a[0],&a[1],&a[2],&a[3],&a[4]);
	for (i=0;i<=4;i++)
	    if (a[i]>='w'&& a[i]<='z'){
	     	a[i]=a[i]-22;
	}
	
		else a[i]=a[i]+4;
		
	printf("%c%c%c%c%c",a[0],a[1],a[2],a[3],a[4]);
	return 0;
}



