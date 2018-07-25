#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[5]={2,5,7,4,8},i,even=0,odd=0;
	for(i=0;i<5;i++)
	{
		if(arr[i]%2==0)
		even++;
		
		else
		odd++;
		
		
	}
	printf("%d\t%d",even,odd);
	
}
