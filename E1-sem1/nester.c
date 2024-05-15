/*#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=5;i++){
for(j=1;j<=i;j++){
printf("*");
}
printf("\n");
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int n,r,s=0;
printf("Enter the values");
scanf("%d",&n);
while(n>0){
r=n%10;
s=s*10+r;
n=n/10;
printf("%d",n);
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int i=0;
do{
printf("%d\n",i);
i++;
}while(i<=10);
printf("%d\n",i);
}*/
/*#include<stdio.h>
int main()
{
int i;
for(i=1;i<=10;i++)
{
if(i==9)
break;
printf("%d\n",i);
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int i;
for(i=1;i<=5;i++)
{
if(i==4)
continue;
printf("%d\n",i);
}
return 0;
}*/
#include<stdio.h>
int main()
{
int i,j,k;
for(i=1;i<=4;i++)
{
for(j=k;j<=3;i++)
{
for(k=0;k<=5;k++)
{
if(k==3)
gotosum;
printf("%d,%d,%d",i,j,k);
}
sum:
printf("exit from loop");
}
return 0;
}
}










































