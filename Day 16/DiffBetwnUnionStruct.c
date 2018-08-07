#include<stdio.h>
union utag{
char a[10];
char grade;
float per;
};
struct stag{
char name[10];
int rolno;
int marks;
}
main()
{
union utag uvar;
struct stag svar;
printf("Size of uvar-%d\n",sizeof(uvar));
printf("Address of uvar-%u\n",&uvar);
printf("Address of Member-%u\t%u\t%u\n",&uvar.a,&uvar.grade,&uvar.per);
printf("Size of svar-%d\n",sizeof(svar));
printf("Address of svar-%u\n",&svar);
printf("Address of Member-%u\t%u\t%u\n",&svar.name,&svar.rolno,&svar.marks);
}
