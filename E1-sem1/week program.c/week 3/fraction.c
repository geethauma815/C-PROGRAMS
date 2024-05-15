#include<stdio.h>
#include<math.h>
int main()
{
int n,x,t=-1,s=1,i;
printf("enter the values of x,n");
scanf("%d%d",&n,&x);
for(i=0;i<n;i++)
{
s=s+t*pow(x,i)/(2*i);
t=t*(-1);
}
printf("%d",s);
return 0;
}
