/*#include<stdio.h>
int main()
{
int side;
printf("enter the side:");
scanf("%d",&side);
printf("%d",side*side);
return 0;
}
#include<stdio.h>
int main()
{
int m1,m2,n;
printf("enter the marks:");
scanf("%d%d",&m1,&m2);
n=m1+m2/2;
printf("%d",n);
}
#include<stdio.h>
int main()
{
int n,i;
printf("enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
if(n<10)
{
printf("digit");
break;
}
else
{
printf("not a digit");
break;
}
}
return 0;
}
#include<stdio.h>
int main()
{
int a,b;
printf("enter the number");
scanf("%d%d",&a,&b);
if(a==b)
{
printf("same");
}
else
{
printf("not same");
}
return 0;
}
#include<stdio.h>
int main()
{
int marks;
printf("enter the marks:");
scanf("%d",&marks);
if(marks>80 && marks<=90)
{
printf("first class");
}
else if(marks>70 && marks<=80)
{
printf("second class");
}
else if(marks>60 && marks<=70)
{
printf("c grade");
}
else
{
printf("fail");
}
return 0;
}
#include<stdio.h>
int main()
{
int i,n;
printf("enter the number:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("%d",i);
}
return 0;
}
#include<stdio.h>
int main()
{
int i,n;
int fact=1;
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("%d",fact);
return 0;
}
#include<stdio.h>
int main()
{
int i,n,sum=0,rem;
do
{
rem=n%10;
sum=sum+rem;
n=n/10;
}
while(n>0);
printf("%d",sum);
return 0;
}
#include<stdio.h>
int main()
{
int i,j,n;
printf("enter the number:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
if(n%2==0)
{
goto  even;
}
else
{
goto odd;
}
}
even:
{
printf("even number");
}
odd:
{
printf("odd number");
}
return 0;
}
#include<stdio.h>
int main()
{
int i,j,n;
printf("enter the size:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=1;j<i;j++)
{
printf("*");
}
printf("\n");
}
return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
int i,n,rem,rev=0,t;
printf("enter the size:");
scanf("%d",&n);
t=n;
for(i=0;i<n;i++)
{
rem=n%10;
rev=((rev*10+rem)+(rem,3));
n=n/10;
}
if(t=rev)
{
{
printf("armstrong number");
}
}
else
{
printf("not the armstrong");
}
return 0;
}
#include<stdio.h>
int main()
{
int i;
for(i='A';i<='Z';i++)
{
printf("ascii value %c:%d\n",i,i);
}
for(i='a';i<='z';i++)
{
printf("ascii value %c:%d\n",i,i);
}
return 0;
}
#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=5;i++)
{
for(j=1;j<i;j++)
{
printf("%d",j);
}
printf("\n");
}
return 0;
}
#include<stdio.h>
int main()
{
int count=0,n;
printf("enter the number");
scanf("%d",&n);
while(n>0)
{
n=n/10;
count++;
}
printf("%d",count);
return 0;
}
#include<stdio.h>
int main()
{
int n,i;
printf("enter the size:");
scanf("%d",&n);
int a[n];
printf("enter the elments:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
printf("a[%d] is %d\n",i,a[i]);
return 0;
}
#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("enter the size:");
scanf("%d",&n);
int a[n];
printf("enter the  elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
sum=sum+a[i];
printf("%d",sum);
return 0;
}
#include<stdio.h>
int main()
{
int i,n,pos,value;
printf("enter the size:");
scanf("%d",&n);
int a[n];
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the position where we have to insert:");
scanf("%d",&pos);
if(pos>=n)
{
printf("insertion is not possible");
}
else
{
printf("enter the value to be inserted:");
scanf("%d",&value);
for(i=n-1;i>=pos;i--)
{
a[i+1]=a[i];
}
a[pos]=value;
printf("after insertion\n");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int r1,c1,r2,c2,i,j;
printf("enter the row and column of first matrix:");
scanf("%d%d",&r1,&c1);
printf("enter the row and column of  second marix:");
scanf("%d%d",&r2,&c2);
int a[r1][c1],b[r2][c2],c[r1][c2];
if(r1==r2&&c1==c2)
{
printf("enter the elements of 1st matrix:");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the element of 2nd matrix:");
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
printf("addition of matrix");
for(i=0;i<r1;i++)
{
for(j=0;i<c1;j++)
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
printf("enter the  size of 2nd matrix:");
scanf("%d%d",&r2,&c2);
int a[r1][c1],b[r2][c2],c[r1][c2];
if(c1!=r2)
{
printf("invalid");
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
}
#include<stdio.h>
int main()
{
int i,n,fact=1;
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("%d",fact);
}
#include<stdio.h>
int main()
{
int n1,n2,gcd,i;
printf("enter the values:");
scanf("%d%d",&n1,&n2);
for(i=1;i<n1 && i<=n2;i++)
{
if(n1%i==0 && n2%i==0)
{
gcd=i;
}
}
printf("gcd of %d and %d is %d",gcd,i,i);
}*/
/*#include<stdio.h>
int main()
{
int n1,n2,gcd=1,i;
printf("enter the number");
scanf("%d%d",&n1,&n2);
for(i=1;i<n1 && i<=n2;i++)
{
if(n1%i==0 && n2%i==0)
{
gcd=i;
}
}
printf("gcd of %d and %d",gcd,i);
}*/
#include<stdio.h>
#include<string.h>
int main()
{
int i,j,p,l1,l2;
int a[100],b[100];
printf("enter the string:");
gets(a);
printf("enter the string:");
gets(b);
l1=strlen(a);
l2=strlen(b);
for(i=p;i<l1;i++)
{
a[l2+i]=a[i];
}
for(i=0;i<l2;i++)
{
a[p+i]=b[i];
}
a[l1+l2]='\0';
printf("string:"%s",str1);
}







































































