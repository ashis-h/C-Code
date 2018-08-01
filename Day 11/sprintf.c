#include<stdio.h>
void main()
{
	char str1[10];
	char str2[10];
	int x=1324;
	float y=235.5;
	sprintf(str1,"%d",x);
	sprintf(str2,"%f",y);
	printf("str1 =%s , str2 =%s",str1,str2);
	 
}