/*#include<stdio.h>
#include<string.h>
int main()
{
int n,k,f=0,i;
printf("enter the size");
scanf("%d",&n);
int a[n];
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the key");
scanf("%d",&k);
for(i=0;i<n;i++)
{
if(k==a[i])
{
f=1;
break;
}
}
if(f==1)
{
printf("element found in %d position",i);
}
else
{
printf("the element is not found");
}
return 0;
}*/
/*#include<stdio.h>
#include<string.h>
int main()
{
int i,j,n;
printf("enter the size");
scanf("%d",&n);
char a[10][10],t[10];
printf("enter the string");
for(i=0;i<n;i++)
{
scanf("%s",a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(strcmp(a[i],a[j])>0)
{
strcpy(t,a[i]);
strcpy(a[i],a[j]);
strcpy(a[j],t);
}
}
}
printf("after sorting");
for(i=0;i<n;i++)
{
printf("%s\n",a[i]);
}
}*/



