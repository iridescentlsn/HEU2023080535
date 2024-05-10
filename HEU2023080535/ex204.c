#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int min(int a[]){
	int m=a[0];
	if(m>a[1]){
		m=a[1];
	}
	return m;
}
int max(int a[]){
	int M=a[2];
	if(M<a[3]){
		M=a[3];
	}
	return M;
}

int main(int argc, char *argv[]) {
	int min(int a[]);
	int max(int a[]);
	int a[4];
	int i,m,M;
	scanf("%d,%d,%d,%d",&a[0],&a[1],&a[2],&a[3]);
	m=min(a);
	M=max(a);
	printf("%d",m+M);
	return 0;
}

