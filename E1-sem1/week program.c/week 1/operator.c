#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d;
// arithmetic operator
printf("   .....arithmetic  .....\n");
printf("enter the values:");
scanf("%d%d%d%d",&a,&b,&c,&d);
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
printf("%d",a>b);
printf("%d",a<b);
printf("%d",a<=b);
printf("%d",a>=b);
printf("%d\n",a!=b);
//logical operator
printf("...logical operator..");
printf("%d\n",a>b && a>c);
printf("%d\n",a>b || a>c);
printf("%d\n",a!=b);
// bitwise operator
printf("... bitwise operator..");
int m,n;
printf("enter the values");
scanf("%d%d",&m,&n);
printf("%d",m&n);
printf("%d",m|n);
printf("%d\n",m^n);
printf("%d",~5);
printf("%d\n",212>>2);
printf("%d\n",212<<2);
// conditional operator
int x=1,y;
printf("...conditional operator...");
y=(x==1?2:0);
printf("x value %d\n",x);
printf("y value %d\n",y);
//increment or decrement
printf("...increment or decrement...");
int k,l,o,j;
printf("enter the values:");
scanf("%d%d%d%d",&l,&k,&j,&o);
printf("%d",++k);
printf("%d",l++);
printf("%d",--o);
printf("%d",j--);
//special operator
int *p,q;
char ch;
float f;
double u;
q=20;
p=&q;
printf("size of int :%d",sizeof(q));
printf("size of char :%d",sizeof(ch));
printf("size of float:%d",sizeof(f));
printf("size of double:%d",sizeof(u));
}

