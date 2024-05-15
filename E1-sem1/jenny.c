/*#include<stdio.h>
int main()
{
int i,n;
printf("enter the size:");
scanf("%d",&n);
int a[n];
printf("enter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("a[%d] is %d\n",i,a[i]);
}
}*/
/*#include<stdio.h>
int main()
{
int i,n;
printf("enter the size:");
scanf("%d",&n);
int a[n];
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=n-1;i>=0;i--)
{
printf("a[%d] is %d\n",i,a[i]);
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int i,n;
int even=0,odd=0;
printf("enter the size:");
scanf("%d",&n);
int a[n];
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[n]);
}
for(i=0;i<n;i++)
{
if(a[i]%2==0)
even=even+1;
else
odd++;
}
printf("even:%d",even);
printf("odd:%d",odd);
}*/
#include<stdio.h>
int  main()
{
int i,sum=0,n;
printf("enter the size :");
scanf("%d",&n);
int a[n];
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("sum=%d",sum);
return 0;
}




























