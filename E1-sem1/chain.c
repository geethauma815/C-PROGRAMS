/*#include<stdio.h> 
#include<math.h>
int main()
{
float a,t,s;
printf("enter the value");
scanf("%f,%f",&s,&a);
t=sqrt(2*s/a);
printf("%f",t);
return 0;
}*/
#include<stdio.h>
int main()
{
int r,s,n;
printf("enter the value");
scanf("%d",&n);
while(n>0)
r=n%10;
s=s*10+r;
n=n/10;
}

