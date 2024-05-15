/*#include<stdio.h>
#include<string.h>
int main()
{
char a[20]={"rishitha"};
char b[30]={"dheekonda"};
strncat(a,b,3);
printf("%s\n",a);
puts(a);
return 0;
}*/
/*#include<stdio.h>
#include<string.h>
int main()
{
int len1,len2,i;
char s1[20]={"rishitha"};
char s2[30]={"dheekonda"};
len1=strlen(s1);
len2=strlen(s2);
for(i=0;i<=len2;i++)
{
s1[len1+i]=s2[i];
}
printf("%s\n",s1);
return 0;
}*/
#include<stdio.h>
#include<string.h>
int main()
{
int j,i; 
char str1[100],str2[100],str3[100];
printf("enter the string1:");
gets(str1);
printf("enter the string2:");
gets(str2);
j=0;
for(i=0;str1[i]!='\0';i++)
{
str3[j]=str1[i];
j++;
}
for(i=0;str2[i]!='\0';i++)
{
str3[j]=str2[i];
j++;
}
puts(str3);
}









