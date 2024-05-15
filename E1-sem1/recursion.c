#include<stdio.h>
int sum(int);
int main()
{
int i,n;
printf("enter the value");
scanf("%d",&n);
int s=sum(n);
for(i=0;i<n;i++)
{
printf("%d\n",sum(i));
}
}
int sum(int n)
{
if(n!=0)
{
return (n)+sum(n-1);
}
else
{
return n;
}
}
