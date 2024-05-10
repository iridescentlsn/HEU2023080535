#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	int a[3][3]={1,2,3,4,5,6,7,8,9};
//	int i,j,t=0;
//    for(i=0;i<=2;i++){
//    	for(j=0;j<=2;j++){
//    		printf("%3d",a[i][j]);
//    		
//    		
//		}
//		printf("\n");
//	}
//	for(i=0;i<=1;i++){
//		for(j=0;j<=2;j++){
//			t=a[i][j];
//			a[i][j]=a[2-i][2-j];
//			a[2-i][2-j]=t;
//		if(i==1,j==1){
//			break;
//		}	
//		}
//	}
//	printf("\n");
//	for(i=0;i<=2;i++){
//		for(j=0;j<=2;j++){
//  		printf("%3d",a[i][j]);
//		}
//		printf("\n"); 
//	}
	
	int x,y,z=0;
	scanf("%d",&z);
	x=z/10;
	y=z%10;
	if (x==1){
		if (y==0){
			printf("ten");
		}
		else if (y==1){
			printf("eleven");
		}
		else if (y==2){
			printf("twelve");
		}
		else if (y==3){
			printf("thirteen");
		}
		else if (y==4){
			printf("fourteen");
		}
		else if (y==5){
			printf("fifteen");
		}
		else if (y==6){
			printf("sixteen");
		}
		else if (y==7){
			printf("seventeen");
		}
		else if (y==8){
			printf("eighteen");
		}
		else{
			printf("nineteen");
		}
	
	}else{
		switch(x){
			case 2:
				printf("twenty-");
				break;
			case 3:
				printf("thirty-");
				break;
			case 4:
				printf("fourty-");
				break;
			case 5:
				printf("fifty-");
				break;
			case 6:
				printf("sixty-");
				break;
			case 7:
				printf("seventy-");
				break;
			case 8:
				printf("eighty-");
				break;
			case 9:
				printf("ninety-");
				break;
		}
		switch(y){
		    case 1:
				printf("one");
				break;
		    case 2:
				printf("two");
				break;
			case 3:
				printf("three");
				break;
			case 4:
				printf("four");
				break;
			case 5:
				printf("five");
				break;
			case 6:
				printf("six");
				break;
			case 7:
				printf("seven");
				break;
			case 8:
				printf("eight");
				break;
			case 9:
				printf("nine");
				break;
	}
	}

	
	return 0;
}

