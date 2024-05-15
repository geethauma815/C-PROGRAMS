#include<stdio.h>
void search();
int main()
{
search();
}
void search()
{
int i,n,k,f=0;
printf("enter the number");
scanf("%d",&n);
int a[n];
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the key");
scanf("%d",&k);
for(i=0;i<n;i++)
{
if(k==a[i])
{
f=1;
break;
}
}
if(f==1)
{
printf("index:%d",i);
}
else
{
printf("not found");
}
}
