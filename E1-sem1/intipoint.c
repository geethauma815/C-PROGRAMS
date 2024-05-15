#include<stdio.h>
int main()
{
int n,i;
printf("enter the size\n");
scanf("%d",&n);
int a[n];
printf("enter the elements");
int *p;
p=&a[n];
for(i=0;i<n;i++)
{
scanf("%d",(p+i));
}
for(i=0;i<n;i++)
{
printf("%d\n",*(p+i));
}
return 0;
}
