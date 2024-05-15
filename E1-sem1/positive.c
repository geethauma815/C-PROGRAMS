/*#include<stdio.h>
int main()
{
int n;
printf("enter the value of n");
scanf("%d",&n);
if (n>=0)
printf("n is positive");
else
printf("n is negative");
return 0;
}*/
/*#include<stdio.h>
int main()
{
int marks;
printf("enter the marks");
scanf("%d",&marks);
if(marks>30)
printf("the student is pass");
else
printf("the student is fail");
return 0;
}*/
/*#include<stdio.h>
int main()
{
int marks;
printf("enter the marks");
scanf("%d",&marks);
if(marks>=0 && marks<=30)
printf("the student is fail\n");
else if(marks>30 && marks<=100){
printf("the student is pass\n");
}
else{
printf("wrong marks");
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int marks;
printf("enter the marks");
scanf("%d",&marks);
marks<=30?printf("fail"):printf("pass");
return 0;
}*/
/*#include<stdio.h>
int main()
{
int marks;
printf("enter the marks");
scanf("%d",&marks);
if(marks<30){
printf("the grade is c");
}
else if(marks>=30 && marks<70){
printf("the grade is b");
}
else if(marks>=70 && marks<90){
printf("the grade is a");
}
else{
printf("the grade is a+\n");
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int rates;
printf("enter the rates");
scanf("%d",&rates);
if(rates>=30 && rates<50)
printf("the items are chips and chocolates");
else if(rates>=50 && rates<100){
printf("the items are soaps and dish washer");
}
else if(rates>=100 && rates<500){
printf("the items are pulses and oil and masalas");
}
else{
printf("the other items");
}
return 0;
}*/
#include<stdio.h>
int main()
{
int books;
printf("enter books names");
scanf("%d",&books);
if(books>=45 && books<80){
printf("the books are telugu and hindhi");
}
else if(books>=80 && books<150){
printf("the books are geoligy and history");
}
else if(books>=50 && books<250){
printf("the books are biology");
}
else if(books>=250 && books<500){
printf("the books are mathematics and calucus");
}
else(books>500);{
printf("other books");
}
return 0;
}
