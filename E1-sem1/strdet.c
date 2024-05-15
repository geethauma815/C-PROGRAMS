#include<stdio.h>
#include<string.h>
int  main()
{
char str[100];
int i,p,n,l;
printf("enter the string:");
gets(str);
printf("enter the position where we have to delete");
scanf("%d",&p);
printf("enter the character to be deleted");
scanf("%d",&n);
l=strlen(str);
for(i=p+n;i<l;i++)
{
str[i-n]=str[i];
}
str[i-n]='\0';
printf("string:%s",str);
}
