/*#include<stdio.h>
int main()
{
int i,a=0,b=1,n,c;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
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
{
printf("%d",c);
}

return 0;
}*/
#include<stdio.h>
int main()
{
int bin=0,r=0,p=1,n;
printf("enter the value");
scanf("%d",&n);
while(n!=0)
{
if(n>0&&n<225)
{
r=n%2;
n=n/2;
bin=bin+(r*p);
p=p*10;
printf("binary:%d\n",bin);
}
else
{
printf("not a binary");
}
}
return 0;
}
