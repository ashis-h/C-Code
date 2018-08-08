#include<stdio.h>
void drowline();
main()
{
drowline();
}
void drowline()
{
int i,j;
for(i=1;i<=20;i++)
{
    for(j=0;j<=80;j++){
if(j==40){
    printf("|");
}
else if(i!=10)

{

printf(" ");
}
if(i==10){
       printf("-");
}
    }
    printf("\n");
}

}
