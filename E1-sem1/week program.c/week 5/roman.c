#include<stdio.h>
#include<string.h>
int main()
{
int i,k,l;
char str[100];
int a[100];
printf("enter the roman number:\n");
//scanf("%[^*]",str);
gets(str);
l=strlen(str);
for(i=0;i<l;i++)
{
switch(str[i])
{
case 'I': a[i]=1;
          break;
case 'V': a[i]=5;
          break;
case 'X': a[i]=10;
          break;
case 'L': a[i]=50;
          break;
}
}
k=a[l-1];
for(i=l-1;i>0;i--)
{
if(a[i]>a[i-1])
{
k=k-a[i-1];
}
if(a[i]<=a[i-1])
{
k=k+a[i-1];
}
}
printf("decimal eqivalence:%d",k);
return 0;
}
           
           
           
