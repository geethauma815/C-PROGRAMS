/*#include<stdio.h>
int main()
{
int i,j,n,k,f=0;
printf("enter the size");
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
printf("element is present in %d position",i);
f=1;
break;
}
}
if(f==0)
{
printf("element is not present");
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int i,j,n,t;
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
for(j=i+1;j<n-i-1;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("after bubble sorting");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}*/
/*#include<stdio.h>
int main()
{
int i,j,n,t;
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
while(j>=0 && a[j]>t)
{
a[j+1]=a[j];
j--;
}
a[j+1]=t;
}
printf("after insertion");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}*/
#include<stdio.h>
int main()
{
int i,n,k,high,low,mid,j,t,f=0;
printf("enter the size");
scanf("%d",&n);
int a[n];
printf("enter the element");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the key");
scanf("%d",&k);
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
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
while(low<=high)
{
mid=low+high/2;
}
if(k==a[mid])
{
printf("elment is present in %d posiotion ",mid);
f=1;
//break;
}
else if(k>a[mid])
{
low=mid+1;
}
else
{
high=mid-1;
}
return 0;
}































