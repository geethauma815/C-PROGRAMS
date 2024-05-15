#include<stdio.h>
int main()
{
int marks,sub1,sub2,sub3;
printf("enter the marks");
scanf("%d",&marks);
int avg=sub1+sub2+sub3/3;
if(marks>0 &&marks<40)
{
printf("fail");
}
else if(marks>40 && marks<60)
{
printf("second  class");
}
else if(marks>60 && marks<70)
{
printf("first class");
}
else
{
printf("distinction");
}
return 0;
}
