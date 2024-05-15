/*#include<stdio.h>
int main()
{
int n;
printf("enter the number");
scanf("%d",&n);
int f=fact(n);
printf("%d",f);
}
int fact(int n)
{
if(n<=1)
{
return 1;
}
else 
{
return n*fact(n-1);
}
}*/
#include<stdio.h>
int fib(int);
int main()
{
printf("enter the value");
scanf("%d",&n);
int f=fib(n);
printf("%d",f);
}
int fib(int n)
{
if(n==0)
{
return 0;
}
else if
{
return 1;
}
else
{
return fib(n-1)+fib(n-2);
}
} 
