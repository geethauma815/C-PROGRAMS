#include<stdio.h>
int main()
{
int i;
char str1[100],str2[100];
printf("enter the string1:");
gets(str1);
printf("enter the string2:");
gets(str2);
for(i=0;str1[i]!='\0';i++)
{
str2[i]=str1[i];
}
str2[i]='\0';
printf("string str2:%s",str2);
return 0;
}
