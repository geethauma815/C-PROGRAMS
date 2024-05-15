#include<stdio.h>
#include<math.h>
int main()
{
int i,n,s=1,t=-1,x;
printf("enter n value");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
s=(s+t*pow(x,i)/2*i);
t=t*(-1);
}
printf("%d",s);
}

