#include<stdio.h>
#include<stdlib.h>
int main(){
	int *s,m,n,i;
	printf("enter no of elements:- \n");
	scanf("%d",&n);
	getchar();
	s=(int*)calloc(n,sizeof(int));
	printf("enter array values:- \n");
	for(i=0;i<n;i++){
		scanf("%d",&s[i]);
	}
	m=s[0];
	for(i=0;i<n;i++){
		if(m<s[i]){
			m=s[i];
		}
	}
	printf("max value= %d\n",m);
	free(s);
}
