#include<stdio.h>
int main()
{
int i,n,j,t;
printf("enter the size");
scanf("%d",&n);
int a[n];
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
t=a[i];
j=i-1;
while(j>=0&&a[j]>t)
{
a[j+1]=a[j];
j--;
}
a[j+1]=t;
}
for(i=0;i<n;i++)
{
printf("insertion sorting:%d\n",a[i]);
}
return 0;
}
