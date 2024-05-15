#include<stdio.h>
int main()
{
int i,j,k,n;
printf("enter any number from ato n:");
scanf("%d",&n);
i=0;
j=1;
printf("%d%d",i,j);
k=i+j;
while(k<=n)
{
printf("%d",k);
i=j;
j=k;
k=i+j;
}
return 0;
}
