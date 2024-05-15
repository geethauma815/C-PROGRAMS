#include<stdio.h>
#include<math.h>
int main()
{
float f=10,s=30,a=9.8;
float t;
while(f>0)
{
t=sqrt(2*s/a);
printf("floor=%f\n,time=%f\n",f,t);
f=f-1;
s=s-3;
}
return 0;
}

