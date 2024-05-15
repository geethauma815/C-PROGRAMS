/*#include<stdio.h>
int main()
{
int n,r=0,bin=0,p=1;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
r=n%2;
n=n/2;
bin=bin+(r*p);
p=p*10;
}
printf("%d",bin);
return 0;
}/*
/*#include<stdio.h>***************** table
int main()
{
int a,i;
printf("enter the value of a");
scanf("%d",&a);
for(i=1;i<=10;i++)
printf("%d*%d=%d\n",a,i,a*i);
return 0;
}*/
/*#include<stdio.h>*****compound interest
#include<math.h>
int main()
{
float p,n,r,ci;
printf("enter the values");
scanf("%f%f%f",&p,&n,&r);
ci=p*pow((1+r/100),n)-p;
printf("%f",ci);
return 0;
}*/
/*#include<stdio.h>
int main()
{
int percent;
printf("enter the marks");
scanf("%d",&percent);
if(percent>0 && percent<=40)
printf("the student is failed");
else if(percent>40 && percent<=60)
printf("the student is second");
else if(percent>60 && percent<=70)
printf("the stdudent id first");
else{
printf("the sudent is distinction");
}
return 0;
}*/
/*#include<stdio.h>******************* binary of a postivie number
int main()
{
int r=0,bin=0,p=255,n;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
r=n%2;
n=n/2;
bin=bin+(r*p);
p=p*10;
}
printf("%d",bin);
return 0;
}*/
/*#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the values of a,b,c");
scanf("%d,%d,%d",&a,&b,&c);
if(a>b && a>c)
printf("a is maximum");
else if(b>a && b>c)
printf("b is greater");
else
printf("c is greater");
return 0;
}*/
#include<stdio.h>
int main()
{
int a,b;
printf("enter the values of a,b");
scanf("%d,%d",&a,&b);
printf("arithmetic %d,%d,%d,%d\n",a+b,a-b,a*b,a%b);
printf("relation%d,%d,%d,%d\n",a>b,a<b,a>=b,a<=b);
printf("logical%d,%d\n",a&&b,a||b);
printf("bitwise%d\n",a&b);
printf("increment%d,%d\n",a++,++a);
printf("decrement%d,%d\n",b--,--b);
printf("shift%d,%d\n",a>>b,a<<b);
return 0;
}











 



















