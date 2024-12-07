#include<stdio.h>
#include<stdlib.h>
#define max 5
int stack[max];
int top=-1;
int isfull(){
	if(top==max-1){
		return 1;
	}
	else{
		return 0;
	}
}
int isempty(){
	if(top==-1){
		return 1;
	}
	else{
		return 0;
	}
}
void push(int data){
	if(isfull()){
		printf("stack overflow\n");
		return;
	}
	top=top+1;
	stack[top]=data;
}
int pop(){
	int value;
	if(isempty()){
		printf("stack underflow\n");
		exit(1);
	}
	value=stack[top];
	top=top-1;
	return value;
}
void display(){
	int i;
	if(top==-1){
		printf("empty stack\n");
	}
	for(i=top;i>=0;i--){
		printf("%d\n",stack[i]);
		printf("\n");
	}
}
int main(){
	int choice,data;
	while(1){
		printf("\n");
		printf("1.push\n");
		printf("2.pop\n");
		printf("3.display\n");
		printf("4.exit\n");
		printf("enter choice\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("enter data to be pushed:- ");
				scanf("%d",&data);
				push(data);
				break;
			case 2:
				data=pop();
				printf("deleted element:- %d\n",data);
				break;
			case 3:
				printf("the stack is\n");
				display();
				break;
			case 4:
				exit(0);
			default:
				printf("invalid choice! input again!");
		}
	}
}
