//wap to calculate perimeter of rectangle. take sides, a & b, from the user
#include<stdio.h>
int main(){
    float l,b,p;
    printf("enter length:- ");
    scanf("%f",&l);
    printf("enter breadth:- ");
    scanf("%f",&b);
    p=2*(l+b);
    printf("perimeter of rectangle is:- %f",p);
    return 0;
}

//output
enter length:- 2
enter breadth:- 3
perimeter of rectangle is:- 10.000000