#include<stdio.h>
void rev(int n);
void main()
{
int i;
printf("Enter a Three Digit No");
scanf("%d",&i);
rev(i);

}
void rev(int n)
{
int rem;
if(n==0)
{
  return ;
}
else
{
rem=n%10;
printf("%d",rem);
n=n/10;
rev(n);
}
}
