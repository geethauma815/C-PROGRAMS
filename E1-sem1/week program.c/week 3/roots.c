//write a program to printf roots of a quadratic equation
#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
float d,r1,r2;
printf("enter the values of a,b,c:");
scanf("%d%d%d",&a,&b,&c);
d=(b*b-4*a*c,0.5);
if(d==0)
{
printf("real and equal roots");
r1=(-b+math.sqrt(d)/(2*a));
r2=(b+math.sqrt(d)/(2*a));
printf("%f",r1);
printf("%f",r2);
}
else if(d>0)
{
printf("real and not equal");
}
else
{
printf("both are imaginary roots");
}
return  0;
}
