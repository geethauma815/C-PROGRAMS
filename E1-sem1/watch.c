/*#include<stdio.h>           // words lines and characters in a string
#include<string.h>
int main()
{
char str[100];
int p='\0';
int words=1,lines=1,characters=0,i;
printf("enter the string:");
scanf("%[^*]",str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]==' '|| str[i]=='\t')
{
if(p!=' ' && p!='\t' &&  p!='\0')
words=words+1;
}
p=str[i];
if(str[i]=='\n')
{
lines=lines+1;
}
else if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
{
characters=characters+1;
}
}
printf("total words:%d\n",words);
printf("total lines:%d\n",lines);
printf("total character:%d\n",characters);
return 0;
}*/
/*#include<stdio.h>                // insertion of one string into another

#include<string.h>
int main()
{
int i;
char str1[100],str2[100];
printf("enter the string1:\n");
gets(str1);
printf("enter the string2:\n");
gets(str2);
int l1=strlen(str1);
int l2=strlen(str2);
int p;
printf("enter the position where we have to insert");
scanf("%d",&p);
// position of p=2 to move words into another index
for(i=p;i<l1;i++)
{
str1[l2+i]=str1[i];
}
// copiying the string2 into str1
for(i=0;i<l2;i++)
{
str1[p+i]=str2[i];
}
str1[l1+l2]='\0';
printf("after insetion of the position:%s\n",str1);
return 0;
}*/
/*#include<stdio.h>                //palindrome
#include<string.h>
#include<stdlib.h>
int main()
{
char str[100];
printf("enter the string:\n");
gets(str);
int h=strlen(str)-1;
int l=0;
while(h>l)
{
if(str[l++]!=str[h--])
{
printf("not a palindrome\n");
exit(0);
}
}
printf("palindrome\n");
return 0;
}*/
/*#include<stdio.h>     // deleting the element form specigic position
#include<string.h>
int main()
{
char str[100];
printf("enter the string:\n");
gets(str);
int p,i,n;
printf("enter the position where we have to delete:");
scanf("%d",&p);
printf("enter the character:");
scanf("%d",&n);
int l=strlen(str);
for(i=p+n;i<l;i++)
{
str[i-n]=str[i];
}
str[i-n]='\0';
printf("after deletion:%s",str);
return 0;
}*/
#include<stdio.h>
#include<string.h>
int main()
{
int i,pos=0;
char str1[100],ch;
printf("enter the string:\n");
gets(str1);
int l=strlen(str);
for(i=0;i<l;i++)
{
if(str1[i]==ch)
{
printf("the string is present 1");
}
} 
else 
{
printf("the string is not present 0");
}
return 0;
}




























