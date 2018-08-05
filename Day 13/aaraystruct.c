#include<stdio.h>
 struct student
{
	char name[10];
	int rollno;
	float marks;
};
main()
{
	int i;
	struct student stuarr[3];
	printf("Enter Student details :\n");
	for(i=1;i<=3;i++)
	{
		printf("Student%d:\n",i);
	
		scanf("%s\n%d\n%f",&stuarr[i].name,&stuarr[i].rollno,&stuarr[i].marks);
	}
	for(i=1;i<=3;i++)
	{
		printf("Name=%s\n RollNo=%d\nMarks=%f\n",stuarr[i].name,stuarr[i].rollno,stuarr[i].marks);
	}
		
	
}