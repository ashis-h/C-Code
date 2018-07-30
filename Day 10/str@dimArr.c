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
	int i;
	for(i=0;i<N;i++)
	{
		printf("String : %s\n",arr[i]);
		printf("Adress of string =%u\n",arr[i]);
	}
}
