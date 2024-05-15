#include<stdio.h>
#include<string.h>
void sub();
int main(){
sub();
}
void sub(){
int i,p;
char a[100],b[100];
printf("enter the string");
gets(a);
printf("enter the string2");
gets(b);
printf("enter the position where we have to insert");
scanf("%d",&p);
int l1=strlen(a);
int l2=strlen(b);
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
}
