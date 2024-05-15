#include<stdio.h>
#include<math.h>
int power(int,int);
int main()
{
int x,n;
printf("enter the values");
scanf("%d%d",&x,&n);
int r=power(x,n);
printf("%d^%d:%d",x,n,r);
}
int power(int x,int n)
{
if(n!=0)
{
return (x*power(x,n-1));
}
else
{
return 1;
}
}
