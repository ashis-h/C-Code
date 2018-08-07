#include<stdio.h>
union utag{
double a;
int g;
float p;
};
main()
{
union utag arr[10];
arr[0].a=23.33;
arr[1].g=5;
arr[2].p=1.5;
printf("Value of Array-%f\t%d\t%f\t",arr[0].a,arr[1].g,arr[2].p);
}
