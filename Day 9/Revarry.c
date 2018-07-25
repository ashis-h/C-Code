#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[5],i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n");
	for(i=4;i>=0;i--)
	{
		printf("%d\n",arr[i]);
	}
}
	
