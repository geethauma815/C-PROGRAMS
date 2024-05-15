ascii values of a to and z and specific ascii value of a character
#include<stdio.h>
int main()
{
int i;
char ch;
printf("enter the character");
scanf("%c",&ch);
for(i='a';i<='z';i++)
{
printf("ascii character %c:%d\n",ch,i);
}
return 0;
}
/*#include<stdio.h>
int main()
{
int i,n,count;
printf("enter the number:");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
if(n%i==0)
{
count++;
}
}
if(count==2)
{
printf("prime number");
}
else
{
printf("not the prime number");
}
return 0;
}*/













