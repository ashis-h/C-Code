#include<stdio.h>
#include<conio.h>
void main()
{
int x;
clrscr();
printf("Enter a Number");
scanf("%d",&x);
(x&1)?printf("Odd"):printf("Even");
getch();
}
