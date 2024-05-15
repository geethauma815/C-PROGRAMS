/*#include<stdio.h>
int main()
{
int i,n,count=0;
printf("enter the values");||
scanf("%d",&n);
for(i=1;i<=n;i++){
if(n%i==0);
{
count++;
}
}
if(count==2){
printf("prime");
}
else{
printf("not prime");
return 0;
}
}*/
#include<stdio.h>
int main()
{
int i,n,sum=0;
printf("enter the size:");
scanf("%d",&n);
int a[n];
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("sum:%d",sum);
float avg=(float)sum/n;
printf("average:%f",avg);
int min=a[0];
int max=a[0];
for(i=0;i<n;i++){
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
return 0;
}
