/*#include<stdio.h>         minimum and maximum
int main()
{
int i,min,max;

int a[5]={20,5,56,63,72};
min=a[0];
max=a[0];
for(i=1;i<5;i++)
{
if(min>a[i])
{
min=a[i];
}
else if(max<a[i])
{
max=a[i];
}
}
printf("minimum:%d\n",min);
printf("maximum:%d\n",max);
return 0;
}
#include<stdio.h>                
int main()
{
int n,i,max,min;
printf("enter the size:");
scanf("%d",&n);
int a[n];
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
min=a[0];
max=a[0];
if(min>a[i])
{
min=a[i];
}
else if(max<a[i])
{
max=a[i];
}
}
printf("minimum:%d",min);
printf("maximum:%d",max);
return 0;
}*/                       
/*#include<stdio.h>              // average
int main()
{
int i,n;
float sum=0,avg;
printf("enter the size:");
scanf("%d",&n);
int a[n];
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
avg=sum/i;
printf("average:%f",avg);
return 0;
}*/
/*#include<stdio.h>              // average
int main()
{
int n,i;
float sum=0,mean;
printf("enter the size:");
scanf("%d",&n);
int a[n];
printf("enter the elements:");
for(i=0;i<n;i++)
{ 
scanf("%d",&a[i]);
sum=sum+a[i];
}
mean=sum/i;
printf("%f",mean);
return 0;
}*/
#include<stdio.h>                                   
#include<math.h>
int main()
{
int n,i,sum=0,sum1=0,s,j;
float v,avg,stdvar;
printf("enter the size:");
scanf("%d",&n);
int a[n];
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
avg=sum/n;
for(i=0;i<n;i++)
{
sum1=sum1+pow((a[i]-avg),2);
}
v=sum1/n;
stdvar=sqrt(v);
printf("average:%f\n",avg);
printf("variance is:%f\n",v);
printf("standard variance is:%f\n",stdvar);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
s=a[i];
a[i]=a[j];
a[j]=s;
}
}
}
printf("after sorting array is\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
return 0;
}
/*#include<stdio.h>            identity matrix
int main()
{
int i,j,r,c,n;
printf("enter the row and column:");
scanf("%d%d",&r,&c);
int a[r][c];
printf("enter the elements:\n");
if(r==c)
{
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(i==j)
{
printf("%d",1);
}
else
{
printf("%d",0);
}
}
printf("\n");
}
}
}*/



























