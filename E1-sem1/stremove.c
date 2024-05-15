/*#include<stdio.h>
#include<string.h>
int main()
{
char str[100],ch;
int i,j,l;
printf("enter the string");
gets(str);
printf("enter the character where we have to delete:");
scanf("%c",&ch);
l=strlen(str);
for(i=0;i<l;i++)
{
if(str[i]==ch)
{
for(j=i;j<l;j++)
{
str[j]=str[j+1];
}
l--;
i--;
}
}
printf("after deletion %c is %s",ch,str);
return 0;
}*/
/*#include<stdio.h>
#include<string.h>
int main()
{
int i,l,f=0;
char str[100];
printf("enter the string");
gets(str);
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
}*/
/*#include<stdio.h>
#include<string.h>
int main()
{
int i,l;
int max=0;
int freq[256]={0};
char str[100];
printf("enter the string:");
gets(str);
l=strlen(str);
for(i=0;i<l;i++)
{
freq[str[i]]++;
}
for(i=0;i<256;i++)
{
if(freq[i]>freq[max])
{
 max=i;
}
}
printf("maximum number of %c is occurs in %d times:%s",max,freq[max],str);
return 0;
}*/



