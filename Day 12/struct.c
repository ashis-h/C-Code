 #include<stdio.h>
 #include<string.h>
 struct student{
 	char name[20];
 	int rollno;
 	float marks;
 };
 main()
 {
 	struct student stu1;
 	printf("Enter the Details");
 	scanf("%s %d %f",&stu1.name,&stu1.rollno,&stu1.marks);
 	printf("name=%s\n rollno= %d\n marks= %f\n",stu1.name,stu1.rollno,stu1.marks);
 }
