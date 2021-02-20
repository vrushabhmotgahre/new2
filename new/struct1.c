#include <stdio.h> 
#include <string.h> 

typedef struct student 
{
	char name[20];
	int rollno;
	float marks;
}student_info;

int main()
{
	//struct student stu1,stu2,stu3;
 	student_info stu1 = {
			.name = "vrushabh",
			.rollno = 57,
			.marks = 80
		};
/*
 	student stu2 = {
			.name = "vaibhav",
			.rollno = 57,
			.marks = 80
			};
	
 	student stu3 = {
			.name = "vineet",
			.rollno = 57,
			.marks = 80
			};
*/
	printf("stu1 : %s %d %f\n",stu1.name,stu1.rollno,stu1.marks);
//	printf("stu2 : %s %d %f\n",stu2.name,stu2.rollno,stu2.marks);
	
	return 0;
}

