/*#include<stdio.h>
int main()
{
int a,b;
printf("enter the values of a,b");
scanf("%d,%d",&a,&b);
if(a>b)
{
printf("a is greater");
}
else{
printf("b is greater");
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the values");
scanf("%d,%d,%d",&a,&b,&c);
if(a>b && a>c)
{
printf("a is greater");
}
else if(b>a && b>c)
{
printf("b is greater");
}
else{
printf("c is greater");
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int marks;
printf("enter the marks");
scanf("%d",&marks);
if(marks>=80 && marks<90){
printf("a grade");
}
else if(marks>=60 && marks<80){
printf("b grade");
}
else{
printf("c grade");
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int a=50,b=10;
if(a>=b){
printf("b is lesser\n");
if(a>b){
printf("a is greater\n");
}
else{
printf("a is equal to b");
}
}
else{
printf("b is greater");
}
return 0;
}*/
#include<stdio.h>
int main()
{
int a=5,b=10;
switch;
{
case'+':printf("%d",a+b);
        break;
case'-':printf("%d",a-b);
        break;
case'*':printf("%d",a*b);
        break;
case'/':printf("%d",a/b);
        break;
default:printf("invalid");
}
return 0;
}




