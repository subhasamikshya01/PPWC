#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

void *fun1();
void *fun2();
int shared=1;

int main(){
	pthread_t thread1,thread2;
	pthread_create(&thread1,NULL,fun1,NULL);
	pthread_create(&thread2,NULL,fun2,NULL);
	pthread_join(thread1,NULL);
	pthread_join(thread2,NULL);
	printf("final value in shared is %d \n",shared);
}

void *fun1(){
	int x;
	x=shared;
	printf("thread1 read the value of shared variable as %d\n",x);
	x++;
	printf("local updation by thread 1 as %d\n",x);
	sleep(1);
	shared=x;
	printf("value of shared variable by thread 1 is %d \n",shared);
}

void *fun2(){
	int y;
	y=shared;
	printf("thread2 read the value of shared variable as %d\n",y);
	y--;
	printf("local updation by thread 2 as %d\n",y);
	sleep(1);
	shared=y;
	printf("value of shared variable by thread 2 is %d \n",shared);
}
