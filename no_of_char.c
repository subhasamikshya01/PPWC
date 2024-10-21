#include<stdio.h>
#include<stdlib.h>
int main(){
	int *c,n;
	char *s;
	printf("enter no of elements:- \n");
	scanf("%d",&n);
	getchar();
	s=(char*)malloc(n*sizeof(char));
	c=(int*)calloc(256,sizeof(int));
	printf("enter the string:- \n");
	scanf("%[^\n]s",s)
	int i=0;
	while(s[i]!='\0'){
		c[s[i]]++;
		i++;
	}
	printf("characters : count\n");
	for(i=0;i<256;i++){
		if(c[i]>0){
		printf("'%c' : %d\n",i,c[i]);
		}	
	}
	free(s);
	free(c);
}
