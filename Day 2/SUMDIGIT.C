#include<stdio.h>
#include<conio.h>
void main()
{
int n,pro=1,rem;
clrscr();
printf("enter a no");
scanf("%d",&n);
while(n>0)
{
rem=n%10;
pro*=rem;
n/=10;
}
printf("%d",pro);
getch();
}