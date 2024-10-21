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
	do{
		printf("Do you want to increase/decrease the size of the string? type 0 for no and 1 for yes:- \n");
		scanf("%d",&choice);
		if(choice==1){
			printf("enter size of the string \n");
		scanf("%d",&n);
		getchar();
		s=(char*)realloc(s,(n+1)*sizeof(char));
		printf("enter a string:- ");
		fgets(s,n+1,stdin);
		lower_to_upper(s);
		}
		else if(choice==0){
			printf("exiting program!!\n");
		}
		else{
			printf("Invalid input please input 0 or 1\n");
			choice=1;
		}
	}while(choice==1);
	free(s);
	return 0;
}

void lower_to_upper(char *s){
	for(int i=0;s[i]!='\0';i++){
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
			s[i]=s[i]-32;;
		}
	}
	printf("converted string:- %s\n",s);
}
