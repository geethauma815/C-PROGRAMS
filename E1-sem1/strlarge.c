#include<stdio.h>
int main()
{
int n,i;
printf("enter the size of an array");
scanf("%d",&n);
int a[n];
printf("enter the ele]ments");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
int max=*a;
int *p=a;
for(i=1;i<n;i++)
{
if((*p+i)>max)
{
max=*(p+i);
}
}
printf("the largest element of an array:"%d\n",max);
return 0;
}
