#include<stdio.h>
union result{
int marks;
char grade;
float per;
}res;
main()
{
res.marks=30;
printf("Marks-%d\n",res.marks);
res.grade='B';
printf("Grade-%c\n",res.grade);
res.per=70;
printf("Percentage-%f\n",res.per);

}
