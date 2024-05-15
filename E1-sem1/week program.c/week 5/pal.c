#include<stdio.h>
#include<string.h>
int main()
{

int i,l,f=0;
char str[100];
printf("enter the string:");
scanf("%s",str);
l=strlen(str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]!=str[l-i-1])
{
f=1;
break;
}
}
if(f==1)
{
printf("not a palindrome");
}
else
{
printf("palindrome");
}
return 0;
}

