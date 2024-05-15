#include<stdio.h>
int main()
{
int x,a;
char y='a';
printf("enter the values");
scanf("%d%d",&x,&a);
x=x+y;
float z=x+10.0;
float b=(float)a;
printf("enter the auto coversion x=%d\n,z=%f\n",x,z);
printf("casting:%f",b);
}
