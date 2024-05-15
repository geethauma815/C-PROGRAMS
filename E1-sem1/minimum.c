/*#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the values:");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
{
printf("%d is maximum\n",a);
}
else if(b>a && b>c)
{
printf("%d is maximum\n",b);
}
else
{
printf("%d is maximum\n",c);
}
if(a<b && a<c)
{
printf("%d is minimum\n",a);
}
else if(b<a && b<c)
{
printf("%d is minimum\n",b);
}
else
{
printf("%d is minimum\n",c);
}
return 0;
}*/
/*#include<stdio.h>
#include<math.h>
int main()
{
float p,t,r,ci,si;
printf("enter the values");
scanf("%f%f%f",&p,&t,&r);
si=p*t*r/100;
ci=p*pow((1+r/100),t)-1;
printf("simple interest:%f\n",si);
printf("compound interest:%f\n",ci);
}*/
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
int r=0,p=1,i,n,bin=0;
printf("enter the values from 1 to n");
scanf("%d",&n);
while(n>0)
{
if(n>0 && n<225)
{
r=n%2;
n=n/2;
bin=bin+(r*p);
p=p*10;
printf("binary:%d",bin);
}
else
{
printf("not binary");
}
//exit(0);
}
return 0;
}*/
/*#include<stdio.h>
#include<math.h>
int main()
{
int a=9.8,s=30,f=10;
float t;
while(f>0)
{
t=sqrt(2*s/a);
printf("floor:%d\n,time:%f\n",f,t);
f=f-1;
s=s-3;
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int i,n,count=0;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
count++;
}
}
if(count==2)
{
printf("prime number");
}
else
{
printf("not a prime number");
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int sum=0,s=0,rem,i,n;
int t=n;
printf("enter the number");
scanf("%d",&n);
while(n>0)
{
rem=n%10;
sum=sum+rem;
s=s*10+rem;
n=n/10;
}
if(s==t)
{
printf("not a palindrome\n");
}
else
{
printf("palindrome\n");
}
printf("sum of the digits:%d\n",sum);
return 0;
}*/
/*#include<stdio.h>
int i,j,num,c;
printf("enter the number");
scanf("%d",&num);
printf("all the number from 1 to n:",num);
for(i=2;i<=num;i++)
{
c=0;
for(j=1;j<=i;j++)
{
if(i%j==0)
{
c++;
}
}
if(c==2)
{
printf("%d",i);
}
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int a=0,b=1,i,n,c;
printf("enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
if(i<=1)
{
c=i;
}
else
{
c=a+b;
a=b;
b=c;
}
}
printf("fibonacci series:%d",c);
return 0;
}*/
/*#include<stdio.h>
#include<string.h>
int main()
{
int i,l1,l2,n,p;
char a[100],b[100];
printf("enter the string:");
gets(a);
printf("enter the string:");
gets(b);
printf("enter the character to be inserted:");
scanf("%d",&p);
l1=strlen(a);
l2=strlen(b);
for(i=0;i<l1;i++)
{
a[l2+i]=a[i];
}
for(i=0;i<l2;i++)
{
a[p+i]=b[i];
}
a[l1+l2]='\0';
printf("string:%s",a);
}*/
/*#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int i,l,n,p;
printf("enter the string:");
gets(str);
printf("enter the position:");
scanf("%d",&p);
printf("enter the character:");
scanf("%d",&n);
l=strlen(str);
for(i=p+n;i<l;i++)
{
str[i-n]=str[i];
}
str[i-n]='\0';
printf("string:%s",str);
}*/
/*#include<stdio.h>
#include<string.h>
int main()
{
int i,n,l,k;
char str[100];
printf("enter the string:");
gets(str);
l=strlen(str);
for(i=0;i<l;i++)
{
switch(str[i])
{
case 'I': str[i]=1;
           break;
case 'v': str[i]=5;
           break; 
case 'X':str[i]=10;
           break;
case 'L':str[i]=50;
 }
}
k=str[l-1];
for(i=l-1;i>0;i--)
{
if(str[i]>str[i-l])
{
k=k-str[i-l];
}
if(str[i]<=str[i-l])
{
k=k+str[i-l];
}
}
printf("%d",k);
}*/
