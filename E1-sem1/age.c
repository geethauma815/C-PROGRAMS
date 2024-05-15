/*#include<stdio.h>
int main()
{
int age;
printf("enter the age");
scanf("%d",&age);
if(age>=18){
printf("eligible to vote");
}
else{
printf("not eligible to vote");
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int age;
printf("enter age");
scanf("%d",&age);
if(age>18 && age<20){
printf("they are adults");
}
else if(age>10 && age>18)
{
printf("they are teenagers");
}
else{
printf("they are children");
}
return 0;
}*/
#include<stdio.h>
int main()
{
int i;
char ch;
printf("enter the character:");
scanf("%c",&ch);
for(i='a';i<='z';i++)
{
printf("ascii value is %c:%d\n",i,i);
}
return 0;
}









