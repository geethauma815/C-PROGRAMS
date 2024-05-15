#include<stdio.h>
int main()
{
int sum=0,rem,n,s=0;
printf("enter the number");
scanf("%d",&n);
int t=n;
while(n>0)
{
rem=n%10;
sum=sum+rem;
s=s*10+rem;
n=n/10;
}
if(s==t)
{
printf("it is  palindrome\n");
}
else
{
printf("it is  not palindrome\n");
}
printf("sum of the digits of number:%d\n",sum);
}
