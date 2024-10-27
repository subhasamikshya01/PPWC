#include <stdio.h>
#include <string.h>
struct student {
	char name[20];
	int rollno;
	float marks;
};
int main() {
	struct student stu1 = {"subha", 23, 9.65};
	struct student stu2, stu3; // Declaration
	strcpy(stu2.name, "sai");
	stu2.rollno = 42;
	stu2.marks = 9.65;
	printf("Enter name, rollno and marks of the student:- \n");
	scanf("%s %d %f", stu3.name, &stu3.rollno, &stu3.marks);
	printf("\nStudent 1: %s %d %.2f\n", stu1.name, stu1.rollno, stu1.marks);
	printf("Student 2: %s %d %.2f\n", stu2.name, stu2.rollno, stu2.marks);
	printf("Student 3: %s %d %.2f\n", stu3.name, stu3.rollno, stu3.marks);	
	printf("Size of name: %zu bytes\n", sizeof(stu1.name));
	printf("Size of rollno: %zu bytes\n", sizeof(stu1.rollno));
	printf("Size of marks: %zu bytes\n", sizeof(stu1.marks));
	printf("Total size of 'student' structure: %zu bytes\n", sizeof(stu1));
	return 0;
}

/*OUTPUT
Enter name, rollno and marks of the student:- 
shakiba
24
9.01

Student 1: subha 23 9.65
Student 2: sai 42 9.65
Student 3: shakiba 24 9.01
Size of name: 20 bytes
Size of rollno: 4 bytes
Size of marks: 4 bytes
Total size of 'student' structure: 28 bytes*/
