#include<stdio.h>
void main()
{
	char str1[10]="1323";
	char str2[10]="234.5";
	int x;
	float y;
	sscanf(str1,"%s",&x);
	sscanf(str2,"%s",&y);
	printf("str =%d ,str2=%s",x,y);
}