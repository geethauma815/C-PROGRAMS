/*#include<stdio.h>
#include<math.h>
int main()
{
float p,n,r,ci;
printf("enter the values");
scanf("%f%f%f",&p,&n,&r);
ci=p*pow((1+r/100),n)-p;
printf("%f",ci);
return 0;
}*/
/*#include<stdio.h>
int main()
{
int p,t,r,n;
printf("enter the values");
scanf("%d",&n);
n=(p*t*r)/100;
printf("%d",n);
}*/
/*#include<stdio.h>
int main()
{
float c,f;
printf("enter the value of c");
scanf("%f",&c);
f=(c*1.8)+32;
printf("%f",f);
return 0;
}*/
#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,r1,r2;
printf("enter the values");
scanf("%f,%f,%f,%f",&a,&b,&c,&d);
d=pow(b*b-4*a*c,0.5);
if(d==0)
{
printf("real and equal roots");
r1=(-b+d)/(2*a);
r2=(-b-d)/(2*a);
printf("%f",r1);
printf("%f",r2);
}
else if(d>0){
printf("real and imaginary roots");
r1=(-b+d)/(2*a);
r2=(-b-d)/(2*a);
printf("%f",r1);
printf("%f",r2);
}
else{
printf("roots are imaginary");
r1=(-b+d)/(2*a);
r2=(-b-d)/(2*a);
printf("%f",r1);
printf("%f",r2);
}
return 0;
}


























