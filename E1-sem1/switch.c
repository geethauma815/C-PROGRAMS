#include<stdio.h>
int main()
{
int day;
printf("enter the value of day");
scanf("%d",&day);
switch(day){
case 1: printf("monday");
        break;
case 2: printf("tuesday");
        break;
case 3: printf("wednesday");
        break;
case 4: printf("thursday");
        break;
case 5: printf("friday");
        break;
case 6: printf("saturday");   
        break;
case 7: printf("sunday");
        break;
deafult: printf("it's not the day");
}
return 0;
}
/*#include<stdio.h>
int main()
{
int month;
printf("enter the month");
scanf("%d",&month);
switch(month){
case 1 : printf("january");
         break;
case 2 : printf("february");
         break;
case 3 : printf("march");
         break;
case 4 : printf("april");
         break;
case 5 : printf("may");
         break;
case 6 : printf("june");
         break;
case 7 : printf("july");
         break;
case 8 : printf("august");
         break;
case 9 : printf("september");
         break;
case 10 : printf("october");
         break;
case 11 : printf("november");
         break;
case 12 : printf("december");
         break;
default : printf("it's not a month");
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int number;
printf("enter the value of number");
scanf("%d",&number);
if(number>=0){
printf("the number is positive\n");
if(number%2==0)
printf("the number is even\n");
else
printf("the number is odd\n");
}
else{
printf("the number is negative\n");
}
return 0;
}*/
/*/*#include<stdio.h>
int main()
{
int a=10,b=20;
int c,choice;
printf("enter the choice");
scanf("%d",&choice);
switch(choice){
case 1:c=a+b;
 printf(" the addition : %d",a+b);
         break;
case 2:c=a-b;
 printf("the subtraction : %d",a-b);
         break;
case 3:c=a*b;
 printf("multiplication: %d",a*b);
         break;
case 4: c=a/b;
printf("the divison : %d",a/b);
         break;
default: printf("not the  right choice");
}
return 0;
}*/











