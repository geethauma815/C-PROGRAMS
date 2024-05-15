#include<stdio.h>
int sum(int);
int main()
{
int n;
printf("enter the value of n\n");
scanf("%d",&n);
//int c=sum(n);
printf("%d",sum(n));
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
/*#include<stdio.h>
int fact(int);
int main()
{
int i,n;
printf("enter the value");
scanf("%d",&n);
int s=fact(n);
for(i=0;i<n;i++)
{
printf("%d\n",fact(i));
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
}*/
