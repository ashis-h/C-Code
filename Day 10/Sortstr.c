#include<stdio.h>
#include<conio.h>
#define N 5
#define LEN 10
void main()
{
	char arr[N][LEN]={
	"white",
	"Red",
	"Black",
	"Green",
	"Yellow",
	
	};
	char temp[10];
	int i,j;
	printf("Before Sorting String \n");
	for(i=0;i<N;i++)
		printf("%s\n",arr[i]);
	printf("\n");
	for(i=0;i<N;i++)
		for(j=i+1;j<N;j++)
			if(strcmp(arr[i],arr[j])>0)
			{
			strcpy(temp,arr[i]);
			strcpy(arr[i],arr[j]);
			strcpy(arr[j],temp);
	}
	printf("After sorting array \n");
	for(i=0;i<N;i++)
	
		printf("%s\n",arr[i]);
}
