#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,i;
	printf("how many elements you want to enter? \n");
	scanf("%d",&n);
	int *p;
	p=(int*)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++){
		printf("enter number: \n");
		scanf("%d",(p+i));
	}
	printf("numbers:- \n");
	for(int i=0;i<n;i++){
		printf("%d\t",*(p+i));
	}
	printf("\n");
	free(p);
	return 0;
}
