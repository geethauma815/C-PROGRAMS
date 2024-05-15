/*#include<stdio.h>
int main()
{
int i,j,min,t,n;
printf("enter the size");
scanf("%d",&n);
int a[n];
printf("enter the element");
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
t=a[j];
a[j]=a[min];
a[min]=t;
}
}
printf("after sorting");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}*/
#include<stdio.h>
int main()
{
int i,j,n,k,t;
printf("enter the size");
scanf("%d",&n);
int a[n];
printf("enter the elemtns");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
t=a[i];
j=i-1;
while(t>=0 && a[j]>t)
{
a[j+1]=a[j];
j--;
}
a[j+1]=t;
}
printf("after sorting");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}
