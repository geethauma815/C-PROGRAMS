/*#include<stdio.h>
struct employee;
{
int salary;
char name[20];
};
int main()
{
int i,sum=0;
struct s[5];
for(i=0;i<=5;i++)
{
printf("enter the salary",i+1);
scanf("%d",&s[i].salary);
sum=sum+s[i];
}
float avg=s/5;
printf("avg=%f",avg);
}*/
/*#include<stdio.h>
int main()
{
int a=10;
int *p;
p=&a;
printf("Address:%d",a);
printf("address:%d",p);
printf("address:%u",*p);
printf("address:%d",a);
return 0;
}*/
/*#include<stdio.h>
int main()
{
int i,n;
printf("enter the size");
scanf("%d",&n);
int a[n];
int *p;
p=&a[0];
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",p);
}
for(i=0;i<n;i++)
{
printf("%d\t",*p+i);
}
}*/
/*#include<stdio.h>
int main()
{
int i,n,sum=0;
printf("enter the size");
scanf("%d",&n);
int a[n];
int *p;
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",p+i);
sum=sum+*(p+1);
}
printf("sum:%d",sum);
}*/
/*#include<stdio.h>
int main()
{
int i,n;
printf("enter the size");
scanf("%d",&n);
int a[n];
int *p;
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",p);
}
for(i=n-1;i>=0;i--)
{
printf("%d",*p);
}
}*/
