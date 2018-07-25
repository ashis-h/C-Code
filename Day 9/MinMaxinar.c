#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[5]={2,4,3,5,6},i,min,max;
	min=max=arr[0];
	for(i=1;i<5;i++)
	{
	if(arr[i]>max)
	max=arr[i];
	if(arr[i]<min)
	min=arr[i];
	
	}
	printf("Max & Min =%d\t%d",max,min);
}
