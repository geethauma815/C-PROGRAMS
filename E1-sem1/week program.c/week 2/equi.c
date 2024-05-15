#include<stdio.h>
#include<stdlib.h>
int main()
{
int r=0,bin=0,p=1,n;
printf("enter the values of 0 to 225");
scanf("%d",&n);
while(n!=0)
{
if(n>0 && n<225)
{
r=n%2;
n=n/2;
bin=bin+(r*p);
p=p*10;
printf("binary eqivalence :%d\n",bin);
}
else
{
printf("not the binary");
}
//exit(0);
}
return 0;
}
