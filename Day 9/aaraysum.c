#include<stdio.h>
#include<conio.h>
#define size 10
void main()
{
	int arr[size],i,sum=0;
	printf("Ente the No");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	printf("Total sum=%d",sum);
}
