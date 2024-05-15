#include<stdio.h>
#include<string.h>
int main()
{
char a[20][20],t[10];
int i,j,n;
printf("enter the value");
scanf("%d",&n);
printf("enter the names");
for(i=0;i<n;i++)
{
scanf("%c",a[i]);
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
printf("%s\t\n",a[i]);
}
printf("\n");
}
