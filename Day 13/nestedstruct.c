#include<stdio.h>
struct time{
	int hr;
	int min;
	int sec;
	
};
struct date
{
	int day;
	int month;
	struct time t;
};
struct student{
	char name[10];
	struct date dob;
}stu1;
main()
{
struct time t;
struct date dob;
printf("Enter time\n");
scanf("%d%d%d",&stu1.dob.t.hr,&stu1.dob.t.min,&stu1.dob.t.sec);
printf("Ente date\n");
scanf("%d%d",&stu1.dob.day,&stu1.dob.month);
printf("Enter Name\n");
scanf("%s",&stu1.name);
printf("Officer Name=%s\n",stu1.name);
printf("Officer Date of join=%d/%d\n",stu1.dob.day,stu1.dob.month);
printf("Office Timing=%d To %d",stu1.dob.t.hr,stu1.dob.t.hr+8);

}
