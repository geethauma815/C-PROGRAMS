// to delete n characters from the given string.
/*#include<stdio.h>                 
#include<string.h>
int main()
{
int p,n,i,l;
char str[100];
printf("enter the string:");
gets(str);
printf("enter the position of element where we have to delete");
scanf("%d",&p);
printf("enter the number of character we have to deleted:");
scanf("%d",&n);
l=strlen(str);
for(i=p+n;i<l;i++)
{
str[i-n]=str[i];
}
str[i-n]='\0';
printf("%s",str);
return 0;
}*/
/*#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int f[128]={0},i;
printf("enter the string:");
gets(str);
for(i=0;str[i]!='\0';i++)
{
f[str[i]]++;
}
for(i=0;i<128;i++)
{
if(f[i]!=0)
printf("character %c occurs in %d times\n",i,f[i]);
}
return 0;
}*/
/*#include<stdio.h>         
#include<string.h>
int main()
{
char str[100];
char p;
p='\0';
int words=1,lines=1,characters=0,i;
printf("enter the string:\n");
scanf("%[^*]",str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]==' '||str[i]=='\t'||str[i]=='\n')
{
if(p!=' '&& p!='\t'&&p!='\n'&&p!='\0')
words++;
}
p=str[i];
if(str[i]=='\n')
{
lines++;
}
else if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]>='Z'))
{
characters++;
}
}
printf("tota number of words:%d\n",words);
printf("total number of lines:%d\n",lines);
printf("total number of characters:%d\n",characters);
return 0;
}*/
