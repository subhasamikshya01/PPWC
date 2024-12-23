#include<stdio.h>
int main(){
	int r,c,i,j;
	int counter=0;
	int t=0;
	printf("enter the no. of rows:- ");
	scanf("%d",&r);
	printf("enter the no. of columns:- ");
	scanf("%d",&c);
	int a[r][c];
	int b[r][c];
	for(i=0;i<r;i++){
		for(int j=0;j<c;j++){
			printf("enter the value of a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for(int j=0;j<c;j++){
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			b[i][j]=a[j][i];
		}
	}
	printf("\n");
	for(i=0;i<r;i++){
		for(int j=0;j<c;j++){
			printf("%d  ",b[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(a[i][j]!=b[j][i]){
				t=t+1;
				break;
			}
		}
	}
	if(t==0){
		printf("symmetric matrix\n");
	}
	else{
		printf("not a symmetric matrix\n");
	}
}
