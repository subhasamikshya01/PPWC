#include <stdio.h>
void gcd(int *a,int *b){
    int t;
    if(*a<*b){
        t=*a;
        *a=*b;
        *b=t;
    }
    while(*b != 0){
        t=*b;
        *b=*a%*b;
        *a=t;
    }
}
int main(){
    int a,b;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&a,&b);
    gcd(&a,&b);
    printf("GCD is: %d\n",a);
    return 0;
}
