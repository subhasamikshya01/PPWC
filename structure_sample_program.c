#include<stdio.h>
#include<string.h>

struct student{
	char name[20];
	int rollno;
	float marks;
};

int main(){
	//initialising the values
	struct student stu1={"subha",23,9.65};
	struct student stu2,stu3; //declaration
	
	//entering the values of student 2
	
	strcpy(stu2.name,"sai");
	stu2.rollno=42;
	stu2.marks=9.65;
	
	//taking user input
	
	printf("enter name, rollno and marks of the student:- \n");
	scanf("%s %d %f",stu3.name,&stu3.rollno,&stu3.marks);
	
	//printing the values store in structure elements
	
	printf("student 1 is:- %s %d %.2f\n",stu1.name,stu1.rollno,stu1.marks);
	printf("student 2 is:- %s %d %.2f\n",stu2.name,stu2.rollno,stu2.marks);
	printf("student 3 is:- %s %d %.2f\n",stu3.name,stu3.rollno,stu3.marks);	
	
	return 0;
}
