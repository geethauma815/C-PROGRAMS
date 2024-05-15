#include<stdio.h>
int bin();
int main()
{
bin();
}
int bin()
{
int i,j,n,k,t;
printf("enter the value\n");
scanf("%d",&n);
int a[n];
printf("enter the elements\n");
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
printf("%d\n",a[i]);
}
printf("enter the key");
scanf("%d\n",&k);
int mid,low=0,high=n-1;
while(low<=high)
{
mid=low+high/2;

if(k==a[mid])
{
printf("number is found:%d\t",mid);
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
printf("element is not present");
}
