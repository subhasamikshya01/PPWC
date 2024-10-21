#include<stdio.h>
#include<stdlib.h>
void lower_to_upper(char *s);

int main(){
	int n,i,choice;
	printf("enter size of the string \n");
	scanf("%d",&n);
	getchar();
	char *s;
	s=(char*)malloc((n+1)*sizeof(char));
	printf("enter a string:- ");
	fgets(s,n+1,stdin);
	lower_to_upper(s);
	printf("converted string:- %s\n",s);
}

void lower_to_upper(char *s){
	for(int i=0;s[i]!='\0';i++){
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
			s[i]=s[i]-32;;
		}
	}
	//printf("converted string:- %s\n",s);
}
