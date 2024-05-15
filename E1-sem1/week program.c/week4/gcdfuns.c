// with using resursion
/*#include<stdio.h>
int gcd(int,int);
int main()
{
int n1,n2;
printf("enter the n1 and n2");
scanf("%d%d",&n1,&n2);
int g=gcd(n1,n2);
printf("%d",g);
}
int gcd(int n1,int n2)
{
if(n2!=0)
{
gcd(n2,n1%2);
}
else
{
return n1;
}
}*/
#include<stdio.h>
void gcd();
int main()
{
gcd();
}
void gcd()
{
int n1,n2,min,h;
printf("enter two values");
scanf("%d%d",&n1,&n2);
min=n1<n2?n1:n2;
for(h=min;h>=1;h--)
{
if(n1%h==0 && n2%h==0)
break;
}
printf("%d",h);
}



