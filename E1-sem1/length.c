/*#include<stdio.h>             \\ length of string
#include<string.h>
int main()
{
char s[100];
int i,n,count=0;
printf("enter the string:");
fgets(s,sizeof(s),stdin);
for(i=0;s[i]!='\0';i++)
{
count=count+1;
}
printf("%d",count);
return 0;
}*/
#include<stdio.h>
#include<string.h>
int main()
{
int a=0,i;
char str1[100],str2[100];
printf("enter the string:");
gets(str1,str2);
for(i=0;str1[i]!='\0'||str1[i]!='\0';i++)
{
if(str1[i]!=str2[i])
{
printf("not same");
}
}
else
{
printf("same");
}
return 0;
}
