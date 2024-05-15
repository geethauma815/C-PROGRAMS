#include<stdio.h>
int main()
{
int i,n,j,k,t,f=0;
printf("enter the size");
scanf("%d",&n);
int a[n];
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("after sorting\n");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("enter the key");
scanf("%d",&k);
int low=0,high=n-1,mid;
while(low<=high)
{
mid=low+high/2;
if(k==a[mid])
{
printf("element is found:%d",mid);
return 0;
}
else if(k>a[mid])
{
low=mid+1;
}
else
{
high=mid-1;
}
}
printf("element is not found");
}

