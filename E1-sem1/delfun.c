#include<stdio.h>
#include<string.h>
int del();
int main(){
del();
}
int del()
{
int i,n,p;
char str[100];
printf("enter the string");
gets(str);
printf("enter the position");
scanf("%d",&p);
printf("enter the character");
scanf("%d",&n);
int l=strlen(str);
for(i=p+n;i<l;i++)
{
str[i-n]=str[i];
}
str[i-n]='\0';
printf("delete the string:%s",str);
}
