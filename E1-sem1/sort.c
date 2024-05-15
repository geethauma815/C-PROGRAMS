#include<stdio.h>
int main()
{
int c,i,j,n;
printf("enter the size:");
scanf("%d",&n);
int a[n],b[n];
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<3;i++)
{
c=a[i];
a[i]=b[i];
b[i]=c;
printf("%d",c);
}
return 0;
}
