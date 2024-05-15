#include<stdio.h>
#include<string.h>
int main()
{
int j,i;
char str1[100];
printf("enter the string:");
gets(str1);
puts(str1);
for(i=0;j=0;str1[i]!='\0',i++)
{
if((str1[i]>='a' && str1[i]<='z')||(str1[i]>='A' && str1[i]<='Z'||str1[i]=='\0'))
{
str1[j++]=str1[i];
}
}
str1[j]='\0';
printf("resulted string:%d",str1[i]);
return 0;
}
