#include<stdio.h>
#include<conio.h>
void main()
{
int a=10,b=20,c;
clrscr();
asm{
mov ax,a
mov bx,b
add ax,bx
mov c,ax
}
printf("c=%d",c);
getch();
}
