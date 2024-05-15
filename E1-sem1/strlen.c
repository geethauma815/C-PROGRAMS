/*#include<stdio.h>
#include<string.h>
int main()
{
char a[20];
int i=0,count=0;
printf("enter the string:");
gets(a);
count=strlen(a);
printf("string length=%d",count);
return 0;
}*/
/*#include<stdio.h>
#include<string.h>
int main()
{
int i=0,count=0;
char a[40];
printf("enter the string:");
gets(a);
while(a[i]!='\0')
{
count=count+1;
i++;
}
printf("%d",count);
return 0;
}*/
/*#include<stdio.h>
#include<string.h>
int main()
{
int i;
char str[100];
printf("enter the string:");
gets(str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]>='A'&& str[i]<='Z')
{
str[i]=str[i]+32;
}
else if(str[i]>='a'&&str[i]<='z')
{
str[i]=str[i]-32;
}
}
printf("%s",str);
return 0;
}*/




























