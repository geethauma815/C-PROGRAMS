#include<stdio.h>
int main()
{
int i,n,j,f=0;
printf("enter the value");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<i;j++)
{
f++;
printf("%d",i+j);
}
printf("\n");
}
return 0;
}
