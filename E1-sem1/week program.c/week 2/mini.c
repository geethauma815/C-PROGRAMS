#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the values of a,b,c");
scanf("%d%d%d",&a,&b,&c);
if(a<b && a<c){
printf("%d is minimum\n",a);
}
else if(b<a && b<c)
{
printf("%d is minimum\n",b);
}
else{
printf("%d is minimum\n",c);
}
if(a>b && a>c)
{
printf("%d is maximum\n",a);
}
else if(b>a && b>c)
{
printf("%d is maximum\n",b);
}
else
{
printf("%d is maximum\n",c);
}
return 0;
}
