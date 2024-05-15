#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d;
// arithmetic operator
printf("   .....arithmetic  .....\n");
printf("enter the values:");
scanf("%d%d%d%d",&a &b,&c,&d);
printf("add=%d\n",a+b);
printf("sub=%d\n",a-b);
printf("multi=%d\n",a*b);
printf("div=%d\n",a/b);
printf("mod=%d\n",a%b);
// assignment operator
printf("  .....assignment..\n");
printf("%d\n",a=10);
printf("%d\n",c+=b);
printf("%d\n",d-=a);
printf("%d\n",c*=b);
printf("%d\n",a/=b);
printf("%d\n",c%=b);
// relational operator
printf(" ..... relational operators...\n");
printf("%d"a>b);
printf("%d",a<b);
printf("%d",a<=b);
printf("%d",a>=b);
printf("%d\n",a!=b);

}

