#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char *s,t;
	int n,i;
	printf("enter no of characters:- \n");
	scanf("%d",&n);
	getchar();
	s=(char*)malloc(n*sizeof(char));
	printf("enter string:- \n");
	fgets(s,n+1,stdin);
	for(i=0;i<=n/2;i++){
		t=s[i];
		s[i]=s[n-i-1];
		s[n-i-1]=t;
	}
	printf("reversed string:- \n");
	puts(s);
	free(s);
}
