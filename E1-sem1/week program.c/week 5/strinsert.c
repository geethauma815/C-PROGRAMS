#include<stdio.h>
#include<string.h>
int main()
{
char a[100],b[100];
int i,l1,l2,p;
printf("enter the string:");
gets(a);
printf("enter the string:");
gets(b);
printf("enter the position where we have to insert");
scanf("%d",&p);
l1=strlen(a);
l2=strlen(b);
for(i=p;i<l1;i++)
{
a[l2+i]=a[i];
}
for(i=0;i<l2;i++)
{
a[p+i]=b[i];
}
a[l1+l2]='\0';
printf("string:%s",a);
return 0;
}

