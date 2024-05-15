/*#include<stdio.h>
void search();
int main()
{
search();
}
void search()
{
int i,j,n,f=0,k;
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
f=1;
break;
}
}
if(f==1)
{
printf("element is present in %d",i);
}
else
{
printf("not present");
}
}*/
/*#include<stdio.h>
int bin();
int main()
{
bin();
}
int bin()
{
int i,j,n,k,t;
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
printf("after sorting");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
printf("enter the key");
scanf("%d",&k);
int mid,low=0,high=n-1;
while(low<=high)
{
mid=low+high/2;
if(k==a[i])
{
printf("the element is found in:%d\n",mid);
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
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
printf("after sorting");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}*/
#include<stdio.h>
int ain()
{
int i,n,j,min,t;
printf("Enter the size");
scanf("%d",&n);
int a[n];
printf("enter the eleements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
t=a[min];
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
printf("enter the eleemnts");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}

