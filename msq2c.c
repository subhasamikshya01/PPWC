#include<stdio.h>
int main(){
	int s,ga=0,gb=0,gc=0,gf=0;
	printf("enter strength of the class:- \n");
	int a[]={-23,567,65,12,89,32,17,45,41,58,60,78,82,88,19,22,70,88,41,89,78,79,72,68,74,59,75,81,44,59,-23,-12};
	s=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<s;i++){
		int score=a[i];
		if(score>=80){
			ga++;
		}
		else if(score>=65 && score<=79){
			gb++;
		}
		else if(score>=40 && score<=64){
			gc++;
		}
		else{
			gf++;
		}
	}
	printf("no of students in grade a:- %d\n",ga);
	printf("no of students in grade b:- %d\n",gb);
	printf("no of students in grade c:- %d\n",gc);
	printf("no of students in grade f:- %d\n",gf);
}
