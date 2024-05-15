/*#include<stdio.h>
#include<string.h>
int main()
{
int l,i,k;
char a[100];
printf("enter the string:");
gets(a);
l=strlen(a);
for(i=0;i<l;i++)
{
switch(a[i])
{
case 'I' : a[i]=1;
           break;
case 'V' : a[i]=5;
           break;
case 'X' : a[i]=10;
           break;
case 'L' : a[i]=50;
           break;
           }
}
k=a[i-1];
for(i=l-1;i>0;i--)
{
if(a[i]>a[i-1])
{
k=k-a[i-1];
}
if(a[i]<=a[i-1])
{
k=k+a[i-1];
}
}
printf("roman equivalence:%d",k);
return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
int words=1,lines=1,characters=0;
int i,l;
char str[100],p='\0';
printf("enter the string");
scanf("%[^*]",str);
l=strlen(str);
for(i=0;i<l;i++)
{
if(str[i]!=' ' && str[i]!='\t' && str[i]!='\n')
{
if(p!=' ' && p!='\t' && p!='\n')
{
words++;
}}
if(str[i]=='\n')
{
lines++;
}
else if((str[i]>='a' && str[i]<'z')||(str[i]>='A' && str[i]<'Z'))
{
characters++;
}
}
printf("lines:%d\n",lines);
printf("words:%d\n",words);
printf("characters:%d\n",characters);
}
#include<stdio.h>
#include<string.h>
int main()
{
int i,p,l1,l2;
char a[100],b[100];
printf("enter the string");
gets(a);
printf("enter the string");
gets(b);
printf("enter the position where we have to insert");
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
}
#include<stdio.h>
#include<string.h>
int main()
{
int i,l,p,n;
char str[100];
printf("ente the string");
gets(str);
l=strlen(str);
printf("enter the position where we have to delete");
scanf("%d",&p);
printf("enter the character to be deleted");
scanf("%d",&n);
for(i=p+n;i<l;i++)
{
str[i-n]=str[i];
}
str[i-n]='\0';
printf("string:%s",str);
}
#include<stdio.h>
#include<string.h>
int main()
{
int f=0,i,l;
char str[100];
printf("enter the string");
gets(str);
l=strlen(str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]!=str[l-i-1])
{
f=1;
break;
}
}
if(f==1)
{
printf("not a palindrome");
}
else
{
printf("palindrome");
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int i,n,sum=0;
printf("enter the size:");
scanf("%d",&n);
int a[n];
printf("enter the size");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("sum:%d\n",sum);
float avg=sum/n;
printf("average:%f\n",avg);
int min=a[0];
int max=a[0];
for(i=0;i<n;i++)
{
if(a[i]<min){
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
int sum=0,i,n,sum1=0;
float avg,var,stdvar;
printf("enter the size:");
scanf("%d",&n);
int a[n];
printf("enter the elemnts:");
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
stdvar=sqrt(var);
printf("sum:%d\n",sum);
printf("average:%f\n",avg);
printf("variance:%f\n",var);
printf("standard variance:%f\n",stdvar);
return 0;
}*/
/*#include<stdio.h>
int main()
{
int r1,c1,r2,c2,i,j;
printf("enter the size of 1st matrix:");
scanf("%d%d",&r1,&c1);
printf("enter the size of 2nd matrix:");
scanf("%d%d",&r2,&c2);
int a[r1][c1],b[r2][c2],c[r1][c2];
if(r1==r2&&c1==c2)
{
printf("enter the elements of 1st matrix");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the elements of 2nd matrix:");
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
printf("addition of matrix:");
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
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
printf("enter the size of 1st matrix:");
scanf("%d%d",&r1,&c1);
printf("enter the size of 2nd matrix:");
scanf("%d%d",&r2,&c2);
int a[r1][c1],b[r2][c2],c[r1][c2];
if(c1!=r2)
{
printf("product is not possible");
}
else
{
printf("enter the elements of 1st matrix:");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the elements of 2nd matrix:");
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
printf("product of matrix:");
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int r,c,i,j;
printf("ente the size ");
scanf("%d%d",&r,&c);
int a[r][c],t[c][r];
printf("enter the elemenrs:");
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
printf("transpoe of matrix:");
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
printf("enter the value:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("factorial of a number:%d",fact);
return 0;
}*/
/*#include<stdio.h>
int main()
{
int n1,n2,i,gcd;
printf("enter the values");
scanf("%d%d",&n1,&n2);
for(i=0;i<n1 && i<=n2;i++)
{
if(n1%i==0&&n2%i==0)
gcd=i;
}
printf("gcd of %d and %d is %d",n1,n2,gcd);
return 0;
}*/
/*#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the values ");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
{
printf("maximum%d\n",a);
}
else if(b>a && b>c)
{
printf("maximum %d\n",b);
}
else
{
printf("maximum %d\n",c);
}
if(a<b && a<c)
{
printf("minimum %d\n",a);
}
else if(b<a && b<c)
{
printf("minimum %d\n",b);
}
else
{
printf("minimum %d\n",c);
}
return 0;
}*/
/*#include<stdio.h>
#include<math.h>
int main()
{
float p,t,r,si,ci;
printf("enter the percentage marks:");
scanf("%f",&p);
printf("enter the time");
scanf("%f",&t);
printf("enter the r value");
scanf("%f",&r);
si=p*t*r/100;
ci=p*(pow((1+r/100),t)-1);
printf("simple interset :%f",si);
printf("compound interset :%f",ci);
return 0;
}*/
/*#include<stdio.h>
int main()
{
int marks;
printf("enter the marks");
scanf("%d",&marks);
if(marks>0 && marks<40)
{
printf("fail");
}
else if(marks>=40 && marks<60)
{
printf("c grade");
}
else if( marks>=60 && marks<80)
{
printf("b grade");
}
else 
{
printf("a grade");
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int i,n;
printf("enter the value");
scanf("%d",&n);
for(i=0;i<4;i++)
{
printf("%d*%d=%d\n",n,i,n*i);
}
return 0;
}*/
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
int r=0,bin=0,p=1,n,i;
printf("enter the value from 0 to 225");
scanf("%d",&n);
while(n!=0)
{
if(n>0 && n<225)
{
r=n%2;
n=n/2;
bin=bin+(r*p);
p=p*10;
printf("binary equivalence %d\n",bin);
}
else
{
printf("not the binary");
}
//exit(0);
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int a,b;
char operator;
printf("enter the operator");
scanf("%c",&operator);
printf("enter the values");
scanf("%d%d",&a,&b);
switch(operator)
{
case '+' : printf("addition:%d",a+b);
           break;
case '-' : printf("substraction:%d",a-b);
           break;
case '*' : printf("multiplication:%d",a*b);
           break;
case '/' : printf("divison:%d",a/b);
           break;
case '%' : printf("modulus:%d",a%b);
           break;
default:printf("not a valid operator");
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int i,n,count=0;
printf("enter the number:");
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
int a,b,c;
float d,r1,r2;
printf("enter the values");
scanf("%d%d%d",&a,&b,&c);
d=b*b-4*a*c,0.5;
if(d==0)
{
printf("real and equal roots");
r1=(-b+d)/2*a;
r2=(-b-d)/2*a;
printf("%f\n",r1);
printf("%f\n",r2);
}
else if(d>0)
{
printf("real and not equal roots");
}
else
{
printf("imaginary roots");
}
return 0;
}*/      
/*#include<stdio.h>
#include<math.h>
int main()
{
float f=10,s=30,a=9.8;
float t;
while(f>0)
{
t=sqrt(2*s/a);
printf("floor:%f\n,time=%f\n",t,f);
f=f-1;
s=s-3;
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int sum=0,rem,n,i,s=0;
printf("enter the values");
scanf("%d",&n);
int t=n;
while(n>0)
{
rem=n%10;
sum=sum+rem;
s=s*10+rem;
n=n/10;
}
if(s==t)
{
printf("palindrome\n");
}
else
{
printf("not a palindrome\n");
}
printf("sum of individual digits:%d\n",sum);
}*/
/*#include<stdio.h>
#include<math.h>
int main()
{
int x,i,n=3;
int t=-1;
float sum=1;
printf("enter the value");
scanf("%d",&x);
for(i=1;i<3;i++)
{
sum=sum+t*pow(x,i)/(2*i);
t=t*(-1);
}
printf("%f",sum);
return 0;
}*/
#include<stdio.h>
#include<math.h>
int main()
{
int i,x,n,t;
printf("enter the numbers");
scanf("%d%d",&x,&n);
for(i=0;i<=n;i++)
{
t=pow(x,i);
}
printf("%d",t);
return 0;
}































