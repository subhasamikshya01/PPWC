#include<stdio.h>
#include<string.h>

struct student {
	char name[20];
	int rollno;
	float marks;
};

int main() {
	// Initializing the values
	struct student stu1 = {"subha", 23, 9.65};
	struct student stu2, stu3; // Declaration
	
	// Entering the values of student 2
	strcpy(stu2.name, "sai");
	stu2.rollno = 42;
	stu2.marks = 9.65;
	
	// Taking user input
	printf("Enter name, rollno and marks of the student:- \n");
	scanf("%s %d %f", stu3.name, &stu3.rollno, &stu3.marks);
	
	// Printing the values stored in structure elements
	printf("\nStudent 1: %s %d %.2f\n", stu1.name, stu1.rollno, stu1.marks);
	printf("Student 2: %s %d %.2f\n", stu2.name, stu2.rollno, stu2.marks);
	printf("Student 3: %s %d %.2f\n", stu3.name, stu3.rollno, stu3.marks);	
	
	// Printing the addresses of each member of the structure
	printf("\nAddresses of members of Student 1:\n");
	printf("Address of name: %p\n", &stu1.name);
	printf("Address of rollno: %p\n", &stu1.rollno);
	printf("Address of marks: %p\n", &stu1.marks);

	printf("\nAddresses of members of Student 2:\n");
	printf("Address of name: %p\n", &stu2.name);
	printf("Address of rollno: %p\n", &stu2.rollno);
	printf("Address of marks: %p\n", &stu2.marks);

	printf("\nAddresses of members of Student 3:\n");
	printf("Address of name: %p\n", &stu3.name);
	printf("Address of rollno: %p\n", &stu3.rollno);
	printf("Address of marks: %p\n", &stu3.marks);

	return 0;
}


//OUTPUT
/*Enter name, rollno and marks of the student:- 
shakiba
24
9.01

Student 1: subha 23 9.65
Student 2: sai 42 9.65
Student 3: shakiba 24 9.01

Addresses of members of Student 1:
Address of name: 0x7ffd11c6ed20
Address of rollno: 0x7ffd11c6ed34
Address of marks: 0x7ffd11c6ed38

Addresses of members of Student 2:
Address of name: 0x7ffd11c6ed00
Address of rollno: 0x7ffd11c6ed14
Address of marks: 0x7ffd11c6ed18

Addresses of members of Student 3:
Address of name: 0x7ffd11c6ece0
Address of rollno: 0x7ffd11c6ecf4
Address of marks: 0x7ffd11c6ecf8*/