#include<stdio.h>
struct student{
	char name[10];
	int rollno;
	int marks;
};
dislay(struct student *);
inc_mark(struct student *);
main()
{
struct student stu1={"Ashish",12,75};
struct student stu2={"Anuj",11,80};
inc_mark(&stu1);
inc_mark(&stu2);
display(&stu1);
display(&stu2);
}
inc_mark(struct student *stuptr)
{
    (stuptr->rollno)++;
}
display(struct student *stuptr)
{
    printf("Name -%s\n",stuptr->name);
	printf("RollNo -%d\n",stuptr->rollno);
	printf("Marks -%d\n",stuptr->marks);
}

