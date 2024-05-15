#include<stdio.h>                              
#include<string.h>
int main()
{
char str1
[100];
int i,l,flag=0;
printf("enter the string:");
scanf("%[*^]",str1);
int len=strlen(str1);
for(i=0;str1[i]='\0';i++)
{
if(str1[i]!=str1[l-i-1])
{
flag=1;
break;
}
}
if(flag==2)
{
printf("not a palindrome");
}
printf("palindrome");
return 0;
}
/*#include<stdio.h>
#include<string.h>
int main()
{
int count=0,i;
char str[100];
printf("enter the string:");
gets(str);
int ch[100];
printf("enter the character");
gets(ch);
for(i=0;str[i]!='\0';i++)
{
if(ch==str[i])
count=count+1;
}
printf("%d",count);
return 0;
}*/


