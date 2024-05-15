#include<stdio.h>
int main()
{
int a=0,b=1,i,c,n;
printf("enter the number\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
if(i<=1)
{
c=i;
}
else
{
c=a+b;
a=b;
b=c;
}
printf("fibonacii series:%d\n",c);
}
return 0;
}
