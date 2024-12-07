#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define max 100
int stack[max],top=-1;
int isfull() {
    if(top==max-1){
        return 1;
    } else {
        return 0;
    }
}

int isempty() {
    if(top==-1){
        return 1;
    } else {
        return 0;
    }}

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
        printf("Stack underflow\n");
        exit(1);
    }
    value=stack[top];
    top=top-1;
    return value;
}

void display() {
    if(top==-1){
        printf("Empty stack\n");
    } else {
        printf("Stack contents:\n");
        for(int i=top;i>=0;i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main(){
	char s[max];
	printf("enter the expression:- ");
	fgets(s,max,stdin);
	for(int i=0;i<max;i++){
		if(s[i]!='+'||s[i]!='-'||s[i]!='*'||s[i]!='/'||s[i]!='%'){
			push(s[i]);
		}
		else{
			int a=pop();
			int b=pop();
			if(s[i]=='+'){
				push(a+b);
			}
			if(s[i]=='-'){
				push(a-b);
			}
			if(s[i]=='*'){
				push(a*b);
			}
			if(s[i]=='/'){
				push(a/b);
			}
			if(s[i]=='%'){
				push(a%b);
			}
		}
	}
	display();
	return 0;
}
