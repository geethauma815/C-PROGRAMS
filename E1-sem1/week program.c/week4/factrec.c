//with recursion
/*#include<stdio.h>
int fact(int n)
{
if(n==1)
{
return 1;
}
else
{
return (n)*fact(n-1);
}
}
int main()
{
int n,factorial;
printf("enter the value");
scanf("%d",&n);
factorial=fact(n);
printf("factorial of %d is %d",n,factorial);
}*/
#include<stdio.h>
int main()
{
int i,n,fact=1;
printf("enter the value");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("factorial:%d\n",fact);
return 0;
}


