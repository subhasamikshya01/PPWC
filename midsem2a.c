#include<stdio.h>
void fun1(int);
void fun2(int);
void fun1(int n){
	if (n==0)
		return;
	printf("%d\n",n);
	fun2(n-2);
	printf("%d\n",n);
}
void fun2(int n){
	if (n==0)
		return;
	printf("%d\n",n);
	fun1(++n);
	printf("%d\n",n);
}
int main(){
	fun1(15);
	return 0;	
}
