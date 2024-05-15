#include<stdio.h>
#include<string.h>
int main()
{
int p,n,i;
char str1[100];
printf("enter the string:");
gets(str1);
printf("enter the position where we have to delete");
scanf("%d",&p);
printf("enter the number of digits to  delete:");
scanf("%d",&n);
int l=strlen(str1);
for(i=p+n;i<l;i++)
{
str1[i-n]=str1[i];
}
str1[i-n]='\0';
printf("%s",str1);
}
