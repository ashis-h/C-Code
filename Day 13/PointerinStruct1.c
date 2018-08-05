 #include<stdio.h>
 struct student
{
	char name[10];
	int rollno;
	float marks;
};
main()
{
	struct student stu={"Ashish",12,24};
	struct student *ptr=&stu;
	printf("Name-%s\n",ptr->name);
	printf("RollNo-%d\n",ptr->rollno);
	printf("Marks-%f\n",ptr->marks);
	
}