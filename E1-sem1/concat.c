/*#include<stdio.h>                             concatination without using string handling function
#include<string.h>  
int main()
{
char str1[100],str2[100];
int l1,l2,i,j;
printf("enter the string:");
gets(str1);
printf("enter the string:");
gets(str2);
l1=strlen(str1);
l2=strlen(str2);
for(i=0;i<=l2;i++)
{
str1[l1+i]=str2[i];
}
printf("%s\n",str1);
puts(str2);
return 0;
}*/
/*#include<stdio.h>                     using string handling concatination
#include<string.h>
int main()
{
char str1[100],str2[100];
printf("enter the string:");
gets(str1);
printf("enter the string");
gets(str2);
strcat(str1,str2);
printf("after concatination:%s",str1);
return 0;
}*/
/*#include<stdio.h>                  with using strcomparison
#include<string.h>
int main()
{
int value;
char s1[100],s2[100];
printf("enter the string:");
gets(s1);
printf("enter the string:");
gets(s2);
value=strcmp(s1,s2);
if(value==0)
{
printf("same");
}
else
{
printf("not same");
}
return 0;
}*/
/*#include<stdio.h>                             
#include<string.h>
int main()
{
int i,f=0,v;
char s1[100],s2[100];
printf("enter the string s1:");
gets(s1);
printf("enter the string s2:");
gets(s2);
for(i=0;s1[i]!='\0'||s2[i]!='\0';i++)
{
if(s1[i]=s2[i])
{
f=1;
break;
}		
if(f==0);
printf("same");
}
else
printf("not same");
return 0;
}*/
#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
printf("enter the string:");
gets(str);
strrev(str);
printf("reverse:%s",str);
}



































