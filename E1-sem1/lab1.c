/*#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the values of a,b,c");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
{
printf("maximum:%d",a);
}
else if(b>a && b>c)
{
printf("maximum:%d",b);
}
else
{
printf("maximum:%d",c);
}
if(a<b && a<c)
{
printf("minimum:%d",a);
}
else if(b<a && b<c)
{
printf("minimum:%d",b);
}
else
{
printf("minimum:%d",c);
}
return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
float p,t,r,si,ci;
printf("enter the princplie amount:");
scanf("%f",&p);
printf("enter the time:");
scanf("%f",&t);
printf("enter the rate of interest:");
scanf("%f",&r);
si=p*t*r/100;
ci=((p*(1+r/100,t)-1);
printf("simple interset:%f",si);
printf("compound interset :%f",ci);
}*/
/*#include<stdio.h>
int main()
{
int marks;
printf("enter the marks:");
scanf("%d",&marks);
if(marks<40)
{
printf("fail");
}
else if(marks>40 && marks<=60)
{
printf("c grade");
}
else if(marks>60 && marks<80)
{
printf("b grade");
}
else
{
printf("a grade");
}
return 0;
}
#include<stdio.h>
int main()
{
int i,n;
printf("enter the size:");
scanf("%d",&n);
for(i=1;i<=3;i++)
{
printf("%d*%d=%d\n",n,i,i*n);
}return 0;
}*/
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,r=0,bin=0,p=1;
printf("enter the numbers from 0 to 225:");
scanf("%d",&n);
while(n!=0)
{
if(n>0 && n<225)
{
r=n%2;
n=n/2;
bin=bin+(r*p);
p=p*10;
printf("binary equivalence:%d",bin);
}
else
{
printf("not binary");
}
//exit(0);
}
return 0;
}
#include<stdio.h>
int main()
{
int i,n,sum=0,min,max;
printf("enter the size");
scanf("%d",&n);
int a[n];
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("sum:%d",sum);
float avg=(float)sum/n;
printf("average:%f",avg);
min=a[0];
max=a[0];
for(i=0;i<n;i++)
{
if(a[i]<min)
{
min=a[i];
}
if(a[i]>max)
{
max=a[i];
}
}
printf("minimum:%d\n",min);
printf("maximum:%d\n",max);
}
#include<stdio.h>
#include<math.h>
int main()
{
int i,n,sum=0,sum1=0;
float avg,var,stdvar;
printf("enter the size:");
scanf("%d",&n);
int a[n];
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
avg=(float)sum/n;
for(i=0;i<n;i++)
{
sum1=sum1+pow((a[i]-avg),2);
var=sum1/(float)n;
}
for(i=0;i<n;i++)
{
stdvar=sqrt(var);
}
printf("sum:%d\n",sum);
printf("average:%f\n",avg);
printf("variance:%f\n",var);
printf("standard variance:%f\n",stdvar);
}*/
#include<stdio.h>
#include<string.h>
int main()
{
int str[100],str1[100];
int i,p,l1,l2;
printf("enter the string:");
gets(str);
printf("enter the string");
gets(str1);
printf("enter the position where we have to insert the string:");
scanf("%d",&p);
l1=strlen(str);
l2=strlen(str1);
for(i=p;i<l1;i++)
{
str[l1+i]=str[i];
}
for(i=0;i<l2;i++)
{
str[p+i]=str1[i];
}
str[l1+l2]='\0';
printf("string:%s",str);
}






















