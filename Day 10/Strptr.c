#include<stdio.h>
#include<conio.h>
void main()
{
	char *str;
	str=(char *)malloc(10);
	printf("Enter a String  =");
	scanf("%s",str);
	printf("Address of String=%s",str);
	
}
