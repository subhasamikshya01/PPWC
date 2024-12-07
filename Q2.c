#include<stdio.h>
int main()
{
	int gpg,we;
	printf("Enter 1:if you are graduate\nEnter 2:if you are post graduate");
	printf("\n");
	scanf("%d",&gpg);
	float bs,hra,da,gs,ac;
	switch(gpg){
		case 1:
			bs=5000.00;
			hra=0.2*bs;
			da=0.3*bs;
			gs=bs+hra+da;
			printf("Enter your work experience:- ");
			scanf("%d",&we);
			switch(we){
				case 0:
					ac=gs;
					break;
				case 1:
					ac=gs;
					break;
				case 2:
					ac=gs;
					break;
				default:
					ac=2500+gs;
			}
			break;
		case 2:
			bs=6000.00;
			hra=0.3*bs;
			da=0.4*bs;
			gs=bs+hra+da;
			printf("Enter your work experience:- ");
			scanf("%d",&we);
			switch(we){
				case 0:
					ac=gs;
					break;
				case 1:
					ac=gs;
					break;
				case 2:
					ac=gs;
					break;
				default:
					ac=2500+gs;
			}
			break;
		default:
			printf("Invalid Input! Enter a valid input\n");
	}
	printf("Amount credited=  %f",ac);
	printf("\n");
}
