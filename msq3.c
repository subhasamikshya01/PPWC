#include<stdio.h>
int main(){
	int noe,doe,eelo,goe;
	printf("enter how many eggs you have?\n");
	scanf("%d",&noe);
	doe=noe/12;
	printf("dozen of eggs=%d\n",doe);
	eelo=noe%12;
	printf("extra eggs left over=%d\n",eelo);
	goe=noe/144;
	printf("gross of eggs=%d\n",goe);
}
