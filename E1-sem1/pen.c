/*#include<stdio.h>
int main()
{
int x,y;
printf("enter the value");
scanf("%d",&x);
y=(x%2==0);
printf("%d",y);
return 0;
}*/
/*#include<stdio.h>
int main()
{
int age;
printf("enter age");
scanf("%d",&age);
if(age>19){
printf("the person is eligible to vote\n");
printf("the peson got driving license\n");
}
else{
printf("not eligible to vote\n");
printf("the doesn't got license\n");
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int a=1;
printf("%d\n",a--);
printf("%d",a);
return 0;
}*/
/*#include<stdio.h>
int main()
{
int i;
printf("enter the value");
scanf("%d",&i);
while(i<5){
printf("%d",i);
i++;
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int i,n;
printf("enter the values");
scanf("%d",&n);
for( i=1;i<=10;i++){
if(i==7)
break;
printf("%d*%d=%d\n",n,i,n*i);
}
return 0;
}*/
#include<stdio.h>
int main()
{
int i,n;
printf("enter the value");
scanf("%d",&n);
for(i=1;i<=10;i++){
if(i==4)
continue;
printf("%d*%d=%d\n",n,i,n*i);
}
return 0;
}





























