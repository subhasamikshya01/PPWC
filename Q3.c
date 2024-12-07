#include<stdio.h>
int main()
{
	printf("Enter a number:- ");
	int n,b,a;
	scanf("%d",&n);
	printf("Enter 1.Check it is a prime number or not\nEnter 2.a palindrome\nEnter 3.Sum of digits\n");
	int choice;
	int c=0;
	scanf("%d",&choice);
	switch(choice){
		case 1:
			for(int i=2;i<=n/2;i++)
			{
				if(n%i==0)
				{
					c++;
					break;
				}
			}
			if(c>0)
			{
				printf("it is not prime no\n");
			}
			else{
				printf("it is a prime no\n");
			}
			break;
		case 2:
			int r=0;
			b=n;
			while(b>0){
				a=b%n;
				r=r*10+a;
				b/=10;
			}
			if(r==n){
				printf("palindrome no\n");
			}
			break;
		case 3:
			int sum=0;
			b=n;
			while(b>0){
				a=b%10;
				sum+=a;
				b/=10;
			}
			printf("Sum of digits %d",sum);
			break;
		default:
			printf("Invalid input!\n");
			printf("\n");
		
}
return 0;
}				
