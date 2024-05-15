/*#include<stdio.h>
int main()
{
int n,s=0,r;
printf("enter the values");
scanf("%d",&n);
while(n>0){
r=n%10;
s=s*10+r;
n=n/10;
}
printf("%d",s);
}*/
/*#include<stdio.h>
int main()
{
int n,s=0,r;
printf("enter the value");
scanf("%d",&n);
do{
r=n%10;
s=s+r;
n=n/10;
}
while(n>0);
printf("%d",s);
}*/,
/*#include<stdio.h>
#include<math.h>
int main()
{
int s=0,r,n;
printf("enter the number");
scanf("%d",&n);
int t=n;
do
{
r=n%10;
s=s+pow(r,3);
n=n/10;
}
while(n>0);
printf("%d",s);
if(t==s){
printf("armstrong number");
}
else{
printf("not armstrong");
}
}*/
/*#include<stdio.h>
int main()
{
int a=10,b=20;
int c,choice;
printf("enter the choice");
scanf("%d",&choice);
switch(choice){
case 1:c=a+b;
printf("the addition:%d",a+b);
case 2:c=a-b;
printf("the subtraction :%d",a-b);
case 3:c=a*b;
printf("the mulitiplication :%d",a*b);
case 4:c=a/b;
printf("the division :%d",c);
default:printf("not the choice");
}
return 0;
}*/

























