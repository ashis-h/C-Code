#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("enter an alphabet");
scanf("%c",&ch);
switch(ch)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
printf("Alphabet is vowel");
break;
default:
printf("Alphabet is a constant");
}
getch();
}
