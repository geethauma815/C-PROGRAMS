#include<stdio.h>
int main()
{
int i,j,n;
printf("enter the value");
scanf("%d",&n);
for(i=n-1;i<=n;i++)
{
for(j=1;j<i;j++)
{
printf("%d",j);
}
printf("\n");
}
return 0;
}