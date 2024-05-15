/*#include<stdio.h>
int main()
{
int a=20;
int c=sizeof(a); 
printf("%d",c);
return 0;
}*/
/*#include<stdio.h>
#include<math.h>
int main()
{
int a=24;
int b=29;
int c=a+b;
printf("%d",c);
return 0;
}
#include<stdio.h>
int main()
{
int x,y;
printf("enter the value of x");
scanf("%d",&x);
y=(x/2==0);
printf("%d",y);
return 0;
}*/
#include<stdio.h>
int main()
{
int i,n;
printf("enter the size:");
scanf("%d",&n);
int a[n];
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=n-1;i>=0;i--)
{
printf("a[%d]:%d\n",i,a[i]);
}
return 0;
}



























