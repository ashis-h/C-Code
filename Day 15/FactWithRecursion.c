#include<stdio.h>
int fact(n);
void main()
{
int n;
printf("Enter A No");
scanf("%d",&n);
printf("Factorial No =%d\nFactorial =%d",n,fact(n));
}
int fact(int n)
{
if(n==0)
{
return 1;
}
else
{
return(n*fact(n-1));
}
}
