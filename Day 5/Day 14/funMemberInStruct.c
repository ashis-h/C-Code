#include<stdio.h>
struct student{
	char name[10];
	int rollno;
	int marks;
};
display(char name[],int rollno,int marks);
main()
{
	struct student stu1={"Ashish",12,30};
	struct student stu2;
	strcpy(stu2.name,"Ashish");
	stu2.rollno=11;
	stu2.marks=29;
	display(stu1.name,stu1.rollno,stu1.marks);
	display(stu2.name,stu2.rollno,stu2.marks);
	
}
display(char name[],int rollno,int marks)
{
	printf("Name -%s",name);
	printf("RollNo -%d",rollno);
	printf("Marks -%d",marks);
}