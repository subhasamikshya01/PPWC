#include<stdio.h>
int main(){
float sm,dt,vm,ts,ml;
printf("Enter the money that the user has initially:- \n");
scanf("%f",&sm);
printf("Enter the distance travelled:- \n");
scanf("%f",&dt);
float pop=56*dt*2;
printf("price spent on petrol:-%f\n",pop);
printf("Enter the amount spent on vada:- \n");
scanf("%f",&vm);
ts=pop+vm;
ml=sm-ts;
printf("money left:-%f\n",ml);
return 0;
}
