#include<stdio.h>

	void main()
	{
		char str [20];
		int len;
		printf("Enter a String \n");
		gets(str);;
		len=strlen(str)-1;
		while(len>=0)
		{
			printf("%c",str[len]);
			len--;
		}
		printf("\n");
	}
