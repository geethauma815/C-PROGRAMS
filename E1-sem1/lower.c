/*#include<stdio.h>                                        \\\LOWER AND UPPER CASE STRINGS
#include<string.h>
int main()
{
char str[100];
int i,len;
printf("enter the string:");
gets(str);
int l= strlen(str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]>='a'&&str[i]<='z')
{
str[i]=str[i]-32;
}
else if(str[i]>='A'&& str[i]<='Z')
{
str[i]=str[i]+32;
}
}
printf("%s",str);
return 0;
}*/
#include<stdio.h>
#include<string.h>
int main()
{
int i,v=0,count=0;
char str[100];
printf("enter the string:");
gets(str);
int l=strlen(str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='z')
{
if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
{
v=v+1;
}
else
{
count=count+1;
}
}
}
printf("%d",count);
}
