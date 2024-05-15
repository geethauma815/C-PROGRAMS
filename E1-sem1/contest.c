#include<stdio.h>
#include<stdlib.h>
int main()
{
int c1=0,c2=0,i,n,a;
for(i=0;i<n;i++)
{
if(a[i]=='A')
c1++;
else if(a[i]=='B')
c2++;
}
if(c1>c2)
{
printf("alice\n");
}
else if(c1=c2)
{
printf("draw\n");
}
else
{
printf("bob\n");
}
}
