#include<stdio.h>
int main(){
	int n,c=0;
	printf("enter a number:- \n");
	scanf("%d",&n);
	while(n!=0){
		c++;
		n/=10;
	}
	printf("number of digits present= %d\n",c);
}
