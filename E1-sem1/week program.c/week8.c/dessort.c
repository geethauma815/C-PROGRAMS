#include<stdio.h>
int main()
{
int i,j,max,n,t;
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
max=i;
for(j=i+1;j<n;j++)
{
if(a[max]<a[j])
{
max=j;
}
}
t=a[i];
a[i]=a[max];
a[max]=t;
}
for(i=0;i<n;i++)
{
printf("descending selection:%d\n",a[i]);
}
}
