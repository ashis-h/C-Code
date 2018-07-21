#include<stdio.h>
#include<conio.h>
void main()
{
int n,m;
float d;
clrscr();
printf("\nEnter the Hour Key\n");
scanf("%d",&n);
printf("\nEnter the Minute Key\n");
scanf("%d",&m);
d=(30*n-5.5*m);
printf("Angle between Keys=%f",d);
getch();
}
