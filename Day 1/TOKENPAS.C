#include<stdio.h>
#include<conio.h>
#define merge(a, b) a##b
void main()
{
clrscr();
printf("%d",merge(12, 25));
getch();
}

