 #include<stdio.h>
 #include<string.h>
 struct student{
 	char name[5];
 	int rollno;
 	float marks;
 }stu;
 main()
 {
 	printf("Address of name=%u\n",stu.name);
 	printf("Address of name=%u\n",&stu.rollno);
 	printf("Address of name=%u\n",&stu.marks);
 }
