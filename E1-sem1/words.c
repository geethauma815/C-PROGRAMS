#include<stdio.h>
#include<string.h>
int main()
{
int characters=0,lines=1,words=1,i;
char str[100];
char p='\0';
printf("enter the string");
scanf("%[~*]",str);
for(i=0;str[i]='\0';i++)
{
if(str[i]==' '||str[i]=='\n'|| str[i]=='\t')
if(p!=' ' && p!='\t' && p!='\0')
{
words++;
}
p=str[i];
if(str[i]=='\n')
{
lines++;
}
else if((str[i]>='a'&&str[i]<'z')||(str[i]>='A'&&str[i]<'Z'))
{
characters++;
}
}
printf("lines:%d\n",lines);
printf("words:%d\n",words);
printf("characters:%d\n",characters);
return 0;
}
