#include<stdio.h>
int main(){
	int r,c,i,j;
	int counter=0;
	printf("enter the no. of rows:- ");
	scanf("%d",&r);
	printf("enter the no. of columns:- ");
	scanf("%d",&c);
	int a[r][c];
	for(i=0;i<r;i++){
		for(int j=0;j<c;j++){
			printf("enter the value of a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(a[i][j]==0){
				counter+=1;
			}
		}
	}
	if(counter>=r*c/2){
		printf("sparse matrix\n");
	}
	else{
		printf("not a sparse matrix\n");
	}
}
