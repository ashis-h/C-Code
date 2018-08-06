#include<stdio.h>
#include<string.h>
struct student{
	char name[10];
	int rollno;
	int marks;
};
void display(struct student *);
struct student *func();

main()
{
	struct student *stuptr;
	stuptr=func();
	display(stuptr);

}
struct student *func()
{
struct student *ptr;
ptr=(struct student *)malloc(sizeof(struct student));
strcpy(ptr->name,"Ashish");
ptr->rollno=12;
ptr->marks=30;
return(ptr);
}
display(struct student *stuptr)
{
	printf("Name -%s\n",stuptr->name);
	printf("RollNo -%d\n",stuptr->rollno);
	printf("Marks -%d\n",stuptr->marks);
}
