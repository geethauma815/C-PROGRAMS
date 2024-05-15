/*#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the values");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
{
printf("maximum:%d\n",a);
}
else if(b>a && b>c)
{
printf("maximum:%d\n",b);
}
else
{
printf(" maximum:%d\n",c);
}
if(a<b &&a<c)
{
printf("a is minimum:%d\n",a);
}
else if(b<a && b<c)
{
printf("minimum:%d\n",b);
}
else
{
printf("minimum:%d\n",c);
}
}*/
/*#include<math.h>
int main()
{
float p,t,r,ci,si;
printf("enter the values");
scanf("%f%f%f",&p,&t,&r);
si=p*t*r/100;
ci=p*(pow((1+r/100),t)-1);
printf("simple interest :%f\n",si);
printf("compound interest:%f\n",ci);
}*/
/*int main()
{
int marks;
printf("enter the marks");
scanf("%d",&marks);
if(marks<40)
{
printf("fail");
}
else if(marks>40 && marks<60)
{
printf("second ");
}
else if(marks>60 && marks<70)
{
printf("first");
}
else
{
printf("distinction");
}
}*/
/*#include<stdio.h>
int main()
{
int i,n;
printf("enter the value");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("%d*%d=%d\n",n,i,n*i);
}
return 0;
}*/
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,n,bin=0,r=0,p=1;
printf("enter the value");
scanf("%d",&n);
while(n!=0)
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
printf("not a binary");
}
//exit (0);
}
return 0;
}*/
/*#include<stdio.h>
#include<math.h>
int main()
{
int f=10,s=30,a=9.8;
float t;
while(f>0)
{
t=sqrt(2*s/a);
printf("time:%f\n,floor:%d\n",t,f);
f=f-1;
s=s-3;
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int i,n,count=0;
printf("enter the value");
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
printf("prime");
}
else
{
printf("not a prime");
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int a=0,b=1,n,i,c;
printf("enter the value");
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
printf("fibonacci series:%d\n",c);
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int a,b,c;
float d,r1,r2;
printf("enter the values");
scanf("%d%d%d",&a,&b,&c);
d=(b*b-4*a*c,0.5);
if(d==0)
{
printf("real and equal roots");
r1=((-b+d)/2*a);
r2=((b+d)/2*a);
printf("%f",r1);
printf("%f",r2);
}
else if(d>0)
{
printf("real and not equal roots");
}
else
{
printf("imaginary");
}
}*/
/*#include<stdio.h>
#include<math.h>
int main()
{
int i,n=3,x;
float t=-1;
printf("enter the value");
scanf("%d",&n);
float sum=1;
for(i=1;i<3;i++)
{
sum=sum+t*pow(x,i)/(2*i);
t=t*(-1);
}
printf("sum:%f",sum);
}*/
/*#include<stdio.h>
int main()
{
int i,n,sum=0;
float avg;
printf("enter the elements");
scanf("%d",&n);
int a[n];
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("sum:%d\n",sum);
avg=(float)sum/n;
printf("average:%f\n",avg);
int min=a[0];
int max=a[0];
for(i=1;i<n;i++)
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
}*/
/*#include<stdio.h>
#include<math.h>
int main()
{
int i,n,sum=0,sum1=0;
float avg,var,stdvar;
printf("enter the size");
scanf("%d",&n);
int a[n];
printf("enter th elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("sum:%d\n",sum);
avg=(float)sum/n;
printf("average:%f\n",avg);
for(i=0;i<n;i++)
{
sum1=sum1+pow((a[i]-avg),2);
var=sum1/(float)n;
}
for(i=0;i<n;i++)
{
stdvar=sqrt(var);
}
printf("standard variance:%f\n",stdvar);
printf("variance:%f\n",var);
}*/
/*#include<stdio.h>
int main()
{
int r1,c1,c2,r2,i,j,c[10][10];
printf("enter the size of 1st matrix");
scanf("%d%d",&r1,&c1);
printf("enter the size of 2nd matrix");
scanf("%d%d",&r2,&c2);
int a[r1][c1],b[r2][c2];
if(r1==r2&&c1==c2)
{
printf("enter the elements");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the elements of 2nd matrix");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
scanf("%d",&b[i][j]);
}
}
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
printf("Addition of matrix");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%d",c[i][j]);
}
printf("\n");
}
}
else
{
printf("addition is not possible");
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int r1,c1,r2,c2,i,j,k;
printf("enter the siz of 1st matrix");
scanf("%d%d",&r1,&c1);
printf("enter the size of 2nd matrix");
scanf("%d%d",&r2,&c2);
int a[r1][c1],b[r2][c2],c[r1][c2];
printf("enter the elements");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the elements");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
scanf("%d",&b[i][j]);
}
}
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
c[i][j]=0;
for(k=0;k<c1;k++)
{
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
}
printf("product of matrix");
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int i,j,r,c;
printf("enter the size");
scanf("%d%d",&r,&c);
int a[r][c],t[c][r];
printf("enter the elements");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<c;i++)
{
for(j=0;j<r;j++)
{
t[j][i]=a[i][j];
}
}
printf("transpose");
for(i=0;i<c;i++)
{
for(j=0;j<r;j++)
{
printf("%d\t",t[i][j]);
}
printf("\n");
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int i,n,fact=1;
printf("enter the value");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("factorial:%d",fact);
return 0;
}*/
/*#include<stdio.h>
int main()
{
int n1,n2,i,gcd;
printf("enter the values");
scanf("%d%d",&n1,&n2);
for(i=1;i<n1 && i<=n2;i++)
{
if(n1%i==0 && n2%i==0)
{
gcd=i;
}
}printf("gcd of %d number id %d :%d\n",n1,n2,gcd);
}*/
/*#include<stdio.h>
#include<math.h>
int main()
{
int i,j,n,sum=0,sum1=0,s;
float var,stdvar,avg;
printf("enter the size");
scanf("%d",&n);
int a[n];
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
avg=(float)sum/n;
for(i=0;i<n;i++)
{
sum1=sum1+pow((a[i]-avg),2);
}
var=sum1/n;
stdvar=sqrt(var);
printf("sum:%d\n",sum);
printf("average:%f\n",avg);
printf("stavar:%f\n",stdvar);
printf("var:%f\n",var);
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
}*/
/*#include<stdio.h>
void search();
int main()
{
search();
}
void search(){
int i,n,f=0,k;
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
if(k==a[i]){
f=1;
break;
}
}
if(f==1)
{
printf("elemnt is found:%d",i);
}
else
{
printf("element is not found");
}
}*/
