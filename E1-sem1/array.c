/*#include<stdio.h>
int main()                         user defined array
{
int i,n;
printf("enter the array");
scanf("%d",&n);
int a[n];
printf("enter the element\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("a[%d]:%d\n",a[i],i);
}
return 0;
}
/*#include<stdio.h>           \\ sum of the two arrays
int main()
{
int  i,n,sum=0;
printf("enter the size of array");
scanf("%d",&n);
int a[n];
printf("enter the array:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("sum=%d\n",sum);
return 0;
}*/
/*#include<stdio.h>                 \\one array into another array
int main()
{
int i,n;
printf("enter the size of an array");
scanf("%d",&n);
int a[n],b[n];
printf("enter the array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
b[i]=a[i];
printf("b[%d]=%d\n",i,b[i]);
}
return 0;
}*/
/*#include<stdio.h>          \\ duplicate of array
int main()
{
int i,n,j,count=0;
printf("enter the size of array:");
scanf("%d",&n);
int a[n];
printf("enter the array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
count=count+1;
}
}
}
printf("duplicate value:%d",count);
return 0;
}*/
#include<stdio.h>             
int main()
{
int size,i,j,count;
printf("enter the size of array:\n");
scanf("%d",&size);
int arr[100],freq[100];
printf("enter the elements of array");
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
freq[i]=-1;
}
for(i=0;i<size;i++)
{
count=1;
for(j=i+1;j<size;j++)
{
if(arr[i]==arr[j])
{
count++;
freq[j]=0;
}
}
if(freq[i]!=0)
{
freq[i]=count;
}
}
printf("frequency of all elements of array:\n");
for(i=0;i<size;i++)
{
if(freq[i]!=0)
printf("frequency of %d is %d\n",arr[i],freq[i]);
}
return 0;
}
























