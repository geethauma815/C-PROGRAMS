#include<stdio.h>
int main()
{
int i,c,n,j;
printf("enter the number");
scanf("%d",&n);
printf("all the numbers from 0 to %d\n",n);
for(i=1;i<=n;i++)
{
c=0;
for(j=1;j<=i;j++)
{
if(i%j==0){
c++;
}
}
if(c==2){
printf("%d\n",i);
}
}
return 0;
}





