/*#include<stdio.h>
int main()
{
int i,n,p,sum=0,r;
printf("enter the number");
scanf("%d",&n);
int t=n;
while(n!=0)
{
r=n%10;
sum=sum+(r*r*r);
n=n/10;
}
if(sum==t)
{
printf("armstrong number:%d",sum);
}
else
{
printf("not armstrong");
}
}*/
#include<stdio.h>
#include<math.h>
int main()
{
int t,n,sum,digit,i,r;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
t=i;
sum=0;
digit=0;
while(t!=0)
{
digit++;
t=t/10;
}
t=i;
while(t!=0)
{
r=t%10;
sum=sum+pow(r,digit);
t=t/10;
}
if(sum==i)
{
printf("%d is a armstrong number\n",i);
}
}
return 0;
}
