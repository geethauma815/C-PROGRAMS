#include<stdio.h>
int main()
{
char  operator;
float a,b;
printf("enter the operator");
scanf("%c",&operator);
printf("enter the values of a,b:");
scanf("%f%f",&a,&b);
switch(operator){
case ('+') : printf("addition:%f",a+b);
             break;
case ('-') : printf("subtraction:%f",a-b);
             break;
case ('*') : printf("multiplication:%f",a*b);
             break;
case ('/') : printf("division:%f",a/b);
             break;
default:printf("not the operator");
}   
return 0;
}               
