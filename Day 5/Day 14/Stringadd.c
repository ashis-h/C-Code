#include<stdio.h>
#include<conio.h>
void main()
{
	char str[10]="india",i;
	for(i=0;str[i]!='/0';i++)
	{
	printf("Character =%c\t",str[i]);
	printf("Address =u/t",&str[i]);
}
}
