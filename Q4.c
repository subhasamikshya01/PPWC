#include<stdio.h>
int bubblesort(int *a[]){
	int s=sizeof(*a);
	for(int i=0;i<s;i++){
		for(int j=i;j<s-1;j++){
			if(*a[i]>*a[j]){
				int temp=*a[i];
				*a[i]=a*[j];
				*a[j]=temp;
			}
		}
	}
}
int binarysearch(int *a[],int l,int h,int x){
	while(l<h){
		int m=l+(h-l)/2;
		if(*(a+m)==x)
			return x;
		else if(*(a+m)>x)
	}
}
