#include<stdio.h>
#include<string.h>
int main()
{
char str1[100],str2[100];
int i,flag=0;
printf("enter the string1:");
gets(str1);
printf("enter the string2:");
gets(str2);
for(i=0;str1[i]!='\0' ||str2[i]!='\0';i++)
{
if(str1[i]!=str2[i])
{
flag=1;
break;
}
}
if(flag==0)
{
printf("string is equal\n");
}
else
{
printf("strings are not equal\n");
}
return 0;
}
