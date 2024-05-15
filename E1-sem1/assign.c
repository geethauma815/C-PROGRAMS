#include<stdio.h>         
int main()
{
int n,count=0;
printf("enter the number");
scanf("%d",&n);
while(n>0)
{
n=n/10;
count=count+1;
}
printf("last digit in a number=%d",count);
return 0;
}
/*#include<stdio.h>
int main()
{
int n,r,sum=0,lastdigit,firstdigit;
printf("enter the values");
scanf("%d",&n);
r=n%10;
while(n>10)
{ 
n=n/10;
}
firstdigit=n;
printf("firstdigit=%d,lastdigit=%d",n,r);
return 0;
}*/
