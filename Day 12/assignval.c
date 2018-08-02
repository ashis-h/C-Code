 #include<stdio.h>
 #include<string.h>
 struct student{
 	char name[20];
 	int rollno;
 	float marks;
 };
 main()
 {
 	struct student stu1,stu2;
 	
 	printf("Enter the Details");
 	scanf("%s %d %f",&stu1.name,&stu1.rollno,&stu1.marks);
 	stu2=stu1;
 	printf("stu1 :\nname=%s\nrollno= %d\nmarks= %f\n",stu1.name,stu1.rollno,stu1.marks);
 	printf("stu2 :\nname=%s\nrollno= %d\nmarks= %f\n",stu2.name,stu2.rollno,stu2.marks);
 }
