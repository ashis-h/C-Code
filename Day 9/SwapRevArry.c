#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[5],i,j;
	for(i=0;i<5;i++)
	{
	scanf("%d",&arr[i]);
	}
	for(i=0;i<5/2;i++){
		j=arr[i];
		arr[i]=arr[4-i];
		arr[4-i]=j;
		printf("\n%d,%d",arr[i],arr[4-i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n%d",arr[i]);
	}
	
}
