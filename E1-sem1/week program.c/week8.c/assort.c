#include<stdio.h>
int main()
{
int i,j,n,min,t;
printf("enter the size");
scanf("%d",&n);
int a[n];
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
min=i;
for(j=i+1;j<n;j++)
{
if(a[min]>a[j])
{
min=j;
}
}
t=a[i];
a[i]=a[min];
a[min]=t;
}
for(i=0;i<n;i++)
{
printf("after selsction sorting:%d\n",a[i]);
}
}

