#include<stdio.h>
#include<conio.h>
void main()
{
int year;
clrscr();
printf("enter a year\n");
scanf("%d",&year);
if(year%100 !=0)
{
if(year%4==0)
printf("leap year\n");
else
printf("not leap");
}
else
{
if(year%400==0)
printf("leap year\n");
else
printf("not leaf\n");
}
getch();
}

