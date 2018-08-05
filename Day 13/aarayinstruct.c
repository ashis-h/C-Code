#include<stdio.h>
 struct student
{
	char name[10];
	int rollno;
	int sub_marks[2];
};
main()
{
	int i,j;
	struct student stuarr[2];
	printf("Enter Student Details :\n");
	for(i=1;i<=2;i++)
	{
		printf("Enter Student %d:\n",i);
		printf("Name=");
		scanf("%s",&stuarr[i].name);
		printf("RollNo=");
		scanf("%d",&stuarr[i].rollno);
		for(j=1;j<=2;j++)
		{
			printf("Sub_Marks%d:",j);
			scanf("%d",&stuarr[i].sub_marks[j]);
		}
	}
	for(i=1;i<=2;i++)
	{
		printf("Student%d Details:\n",i);
		printf("Name=%s\n",stuarr[i].name);
		printf("RollNo=%d\n",stuarr[i].rollno);
		for(j=1;j<=2;j++)
		{
			printf("Sub_Marks%d=%d",j,stuarr[i].sub_marks[j]);
		} 
	}
}
	