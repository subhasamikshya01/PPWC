#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("enter the length of the string:");
	scanf("%d",&n);
	getchar();
    char *s;
    s=(char*)calloc((n+1),sizeof(char));
    printf("eneter the string:");
    scanf("%[^\n]s",s);
    int *c;
    c=(int*)calloc(256,sizeof(int));
    int i=0;
    while(s[i]!='\0')
    {
    	c[s[i]]++;
    	i++;
    }
    
    for(int i=0;i<256;i++)
    {
    	if(c[i]>0)
    	{
    		printf(" '%c'=%d\n",i,c[i]);
    	}
    }
}
