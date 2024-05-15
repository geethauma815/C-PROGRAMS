#include<stdio.h>
int main()
{
int n,i,j,b;
printf("enter the size of array\n");
scanf("%d",&n);
int a[n];
int *p;
p=&a[0];
printf("enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",p+i);
}
printf("%d",*(p+i));
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
b=a[i];
a[i]=a[j];
a[j]=b;
}
for(i=0;i<n;i++)
{
printf("%d",*(p+i));
}
}
}
}
