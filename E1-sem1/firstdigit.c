/*#include<stdio.h>
int main()
{
int n,count=0,firstdigit,lastdigit;
printf("enter the number");
scanf("%d",&n);
lastdigit=n%10;
while(n>=10)                              // lastdigit and firstdigit
{
n=n/10;
}
firstdigit=n;
printf("firstdigit=%d,lastdigit=%d",n,lastdigit);
return 0;
}*/
/*#include<stdio.h>
int main()
{
char ch;
printf("enter the character");                                 // character or not
scanf("%c",&ch);
if(ch>='a' && ch<'z'){
printf("the alphabet");
}
else if(ch>=0 && ch<=100){
printf("the digit");
}
else{
printf("it's a special character");
}
return 0;
}*/
#include<stdio.h>
int main()
{
int num,rem,sum=0,i;
printf("enter the number");
scanf("%d",&num);]
for(i=1;i<num;i++){                                       
rem=num%i;
if(rem==0)
{
sum=sum+i;
}
}
if(sum==num){
printf("it is a perfect number");
}
else{
printf("it is not a perfect number");
}
return 0;
}
/*#include<stdio.h>
int main()
{
int n,count=0;
printf("enter the number);                                                                                            
scanf("%d",&n);                   \\the number of digits in a number
while(n>0){
n=n/10;
count=count+1;
}
printf("%d",count);
return 0;
}*/
/*#include<stdio.h>
int main()
{
int n;
printf("enter the year");
scanf("%d",&n);
if(n%4==0 || n%100==0){
printf("it's a leap year");                   \\leap year
}
else{
printf("it's not a leap year");
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int i,j,n,isprime;
printf("enter the number");             \\prime factor
scanf("%d",&n);
printf("%d",n);
for(i=2;i<=n;i++){
if(n%i==0){
isprime=1;
for(j=2;j<=i;j++){
if(i%j==0)
isprime=0;{
break;
}
}
if(isprime==1){
printf("%d\n",i);
}
}
}
return 0;
}*/
#include<stdio.h>
int main()
{
int n1,n2,max;
printf("enter the number");
scanf("%d,%d",&n1,&n2);
max=(n1>n2)?n1:n2;
while(1)
{
if((max%n1==0&&max%n2==0))
{
printf("the lcm %d,and%d and %d ",n1,n2,max);
break;
}
max++;
}
return 0;
}































































