#include<stdio.h>
void dispensebills(int a,int *f,int *t,int *te){
	*f=a/50;
	a%=50;
	*t=a/20;
	a%=20;
	*te=a/10;
}
int main(){
	int a;
	int f=0,t=0,te=0;
	printf("enter amount to withdraw(multiple of 10):- \n");
	scanf("%d",&a);
	if(a%10!=0){
		printf("invalid amount. please enter a multiple of 10.\n");
		return 0;
	}
	dispensebills(a,&f,&t,&te);
	printf("dispensed bills\n");
	printf("50-ruppee bills:- %d\n",f);
	printf("20-ruppee bills:- %d\n",t);
	printf("10-ruppee bills:- %d\n",te);
	return 0;
}
