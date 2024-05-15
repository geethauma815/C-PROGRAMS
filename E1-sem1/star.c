#include<stdio.h>
{
int i,j;
for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
{
printf("*");
}
printf("\n");
}
return 0;
}
/*#include<stdio.h>
int main()
{
int i,j;
for(i=1;i>=15;i++)
{
for(j=1;j<=i;j--)
{
printf("*");
}
printf("\n");
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int i,n,count=0;
printf("enter the number:");
scanf("%d",&n);
for(i=0;i<=n;i++)
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

