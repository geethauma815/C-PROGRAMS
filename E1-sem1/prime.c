#include<stdio.h>
int main()
{
int i,n,count=0;
printf("enter the number");
scanf("%d",&n);
for (i=1;i<=n;i++){
if(n%i==0)
{
count++;
}
}
if(count==2){
printf("not a prime number");
}
else{
printf("the prime number");
}
return 0;
}
/*#include<stdio.h>
int main()
{
int i,c,num,j;
printf("enter the number");
scanf("%d",&num);
printf("all the numbers from 0 to %d\n",num);
for(i=2;i<=num;i++)
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
}*/





