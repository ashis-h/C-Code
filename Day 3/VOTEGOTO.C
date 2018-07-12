#include<stdio.h>
#include<conio.h>
void main()
{
int age;
clrscr();
printf("Enter The Age");
scanf("%d",&age);
if(age>=18)
{
  printf("You Are Eligible");

  }
  else
  {
printf("You Are Not Eligible,Left Year=%d",18-age);
}
getch();
}