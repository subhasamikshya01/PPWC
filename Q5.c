	//pointers

#include<stdio.h>
int main(){
	int arr[5]={5,10,15,20,25};
	int i;

	for(i=0;i<5;i++){
		printf("value of arr[%d]=\n",i);
		printf("%d\n",arr[i]);
		printf("%d\t",*(arr+i));
		printf("%d\t",*(i+arr));
		printf("%d\t",i[arr]);
		printf("address of arr[%d]=%u\n",i,&arr[i]);
	}
	return 0;
}
