#include<stdio.h>
int sum(int);
int main()
{
int n;
printf("enter the value");
scanf("%d",&n);
int s=sum(n);
printf("%d",s);
}
int sum(int n)
{
if(sum!=0)
{
return n+sum(n-1);
}
else
{
return n;
}
}
