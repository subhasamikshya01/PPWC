#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student{
    char *name; 
    int rollno;
    float marks;
};
int main(){
    struct student stu1;
    int n;
    printf("Enter the maximum size of name:-\n");
    scanf("%d",&n);
    stu1.name=(char*)malloc(n*sizeof(char));
    strcpy(stu1.name,"subha");
    stu1.rollno=23;
    stu1.marks=9.65;
    struct student stu2;
    stu2.name=(char*)calloc(n,sizeof(char));
    strcpy(stu2.name, "sai");
    stu2.rollno = 42;
    stu2.marks = 9.65;
    struct student stu3;
    stu3.name = (char *)malloc(n*sizeof(char));  
    printf("Enter name,rollno and marks of the student:-\n");
    scanf("%s %d %f",stu3.name,&stu3.rollno,&stu3.marks);
    printf("Student 1: %s %d %.2f\n",stu1.name,stu1.rollno,stu1.marks);
    printf("Student 2: %s %d %.2f\n",stu2.name,stu2.rollno,stu2.marks);
    printf("Student 3: %s %d %.2f\n",stu3.name,stu3.rollno,stu3.marks);    
    free(stu1.name);
    free(stu2.name);
    free(stu3.name);
    return 0;
}


/*OUTPUT
Enter the maximum size of name:-
20
Enter name,rollno and marks of the student:-
shakiba
24
9.01
Student 1: subha 23 9.65
Student 2: sai 42 9.65
Student 3: shakiba 24 9.01
*/