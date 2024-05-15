//with using recursion
#include<stdio.h>
int gcd(int,int);
int main()
{
int n1,n2;
printf("enter the values");
scanf("%d%d",&n1,&n2);
int r=gcd(n1,n2);
printf("gcd of %d is %d:%d",n1,n2,r);
}
int gcd(int n1,int n2)
{
if(n2!=0)
{
return gcd(n2,n1%n2);
}
else
{
return n1;
}
}

