#include<stdio.h>
int main()
{
int i,n,sum=0;
printf("enter the size:");
scanf("%d",&n);
int a[n];
int *p;
printf("enter the elemets:");
for(i=0;i<n;i++)
{
scanf("%d",p+i);
}
for(i=0;i<n;i++)
{
sum=sum+*(p+i);
}
printf("%d",sum);
}
