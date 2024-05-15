/*#include<stdio.h>
int main()
{
int i,n,count,j;
printf("enter the size");
scanf("%d",&n);
int a[n],freq[100];
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
freq[i]=-1;
}
for(i=0;i<n;i++)
{
count=1;
for(j=i+1;j<n;j++)
{
if(a[i]==a[j]){
count++;
freq[j]=0;
}
}
if(freq[i]!=0)
{
freq[i]=count;
}
}
printf(" frequency of all elements:");
for(i=0;i<n;i++)
{
if(freq[i]!=0){
printf("frequency %d is %d\n", a[i],freq[i]);
}
}
}*/
/*#include<stdio.h>
int main()
{
int i,n,j,count=0;
printf("enter the size:");
scanf("%d",&n);
int a[n];
printf("enter the numbers:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
a[i]=a[i+1];
count++;
break;
}
}
}
printf("%d",count);
return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
int i,n,sum=0,sum1=0;
float avg,var,stdvar;
printf("enter the size:");
scanf("%d",&n);
int a[n];
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
avg=(float)sum/n;
for(i=0;i<n;i++)
{
sum1=sum1+pow((a[i]-avg),2);
var=sum1/(float)n;
}
for(i=0;i<n;i++)
{
stdvar=sqrt(var);
}
printf("sum:%d\n",sum);
printf("average:%f\n",avg);
printf("variance:%f\n",var);
printf("standard variance:%f\n",stdvar);
}
#include<stdio.h>
int main()
{
int i,n,sum=0;
float avg;
printf("enter the size:");
scanf("%d",&n);
int a[n];
printf("enter the number:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("sum:%d\n",sum);
avg=sum/n;
printf("average:%f\n",avg);
int max=a[0];
int min=a[0];
for(i=0;i<n;i++)
{
if(a[i]<min)
{
min=a[i];
}
if(a[i]>max)
{
max=a[i];
}
}
printf("minimum:%d\n",min);
printf("maximum:%d\n",max);
}*/
#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int i,l,f=0;
printf("enter the string");
gets(str);
l=strlen(str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]!=str[l-i-1])
{
f=1;
break;
}
}
if(f==1)
{
printf("not a palindrome");
}
else
{
printf("palindrome");
}
return 0;
}
/*#include<stdio.h>
#include<string.h>
int main()
{
int words=1,lines=1,characters=0,i;
char str[100];
char p='\0';
printf("enter the string");
//gets(str);
scanf("%[^*]",str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]!=' ' && str[i]!='\t'&& str[i]!='\n')
{
if(p!=' ' && p!='\t' && p!='\n')
{
words++;
}
}
if(str[i]=='\n')
{
lines++;
}
else if((str[i]>='a'&& str[i]<'z')||(str[i]>='A'&&str[i]<'Z'))
{
characters++;
}
}
printf("lines:%d\n",lines);
printf("words:%d\n",words);
printf("characters:%d\n",characters);
}*/
/*#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
int i,l,k;
printf("enter the value");
//scanf("%[^*]",a);
gets(a);
l=strlen(a);
for(i=0;i<l;i++)
{
switch(a[i])
{
case 'I' : a[i]=1;
           break;
case 'V' : a[i]=5;
           break;
case 'X' : a[i]=10;
           break;
case 'L' : a[i]=50;
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
printf("roman equivalence:%d",k);
return 0;
}*/

                    































