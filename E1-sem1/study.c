/*#include<stdio.h>
void search();
int main()
{
search();
}
void search()
{
int i,j,f=0,n,k;
printf("enter the size");
scanf("%d",&n);
int a[n];
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the key");
scanf("%d",&k);
for(i=0;i<n;i++)
{
if(k==a[i])
{
f=1;
break;
}
}
if(f==1)
{
printf("%d is present ",i);
}
else
{
printf("not present");
}
}*/
/*#include<stdio.h>
int bin();
int main()
{
bin();
}
int bin()
{
int i,j,k,n,t;
printf("enter the size");
scanf("%d",&n);
int a[n];
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("after sorting");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
printf("enter the key");
scanf("%d",&k);
int mid,low=0,high=n-1;
while(low<=high)
{
mid=low+high/2;
if(k==a[mid])
{
printf("%d is present",mid);
return 0;
}
else if(k>a[mid])
{
low=mid+1;
}
else
{
high=mid-1;
}
}
printf("element is not found");
}*/
/*#include<stdio.h>
int main()
{
int i,n,j,t;
printf("enter the size");
scanf("%d",&n);
int a[n];
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
printf("after insertion");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}*/
/*#include<stdio.h>
int main()
{
int i,j,min,t,n;
printf("enter the size");
scanf("%d",&n);
int a[n];
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
min=i;
for(j=i+1;j<n;j++)
{
if(a[min]>a[j])
{
min=j;
}
t=a[j];
a[j]=a[min];
a[min]=t;
}
}
printf("after sorting");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}*/
/*#include<stdio.h>
int main()
{
int i,j,n,t;
printf("enter the size");
scanf("%d",&n);
int a[n];
printf("enter the elemnts");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
t=a[i];
j=i-1;
while(j>=0 && a[j]>t)
{
a[j+1]=a[j];
j--;
}
a[j+1]=t;
}
printf("after sorting");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}*/
/*#include<stdio.h>
#include<string.h>
int main()
{
int i,j,n,k;
char str[100];
printf("enter the string");
gets(str);
int l=strlen(str);
for(i=0;i<l;i++)
{
switch(str[i])
{
case 'I':str[i]=1;
break;
case'V':str[i]=5;
break;
case'X':str[i]=10;
break;
case'L': str[i]=50;
break;
}
}
k=str[l-1];
for(i=l-1;i>0;i--)
{
if(str[i]>str[i-1])
{
k=k-str[i-1];
}
else if(str[i]<=str[i-1])
{
k=k+str[i-1];
}
}
printf("binary:%d",k);
}*/
/*#include<stdio.h>
#include<string.h>
int sub();
int main()
{
sub();
}
int sub()
{
int i,n,p;
char a[100],b[100];
printf("enter the string");
gets(a);
printf("enter the string");
gets(b);
printf("enter the position");
scanf("%d",&p);
int l1=strlen(a);
int l2=strlen(b);
for(i=p;i<l1;i++)
{
a[l2+i]=a[i];
}
for(i=0;i<l2;i++)
{
a[p+i]=b[i];
}
a[l1+l2]='\0';
printf("stribg:%s",a);
}*/
/*#include<stdio.h>
#include<string.h>
int del();
int main()
{
del();
}
int del()
{
int i,n,p;
char str[100];
printf("enter the string");
gets(str);
printf("enter the position");
scanf("%d",&p);
printf("enter the character");
scanf("%d",&n);
int l=strlen(str);
for(i=p+n;i<l;i++)
{
str[i-n]=str[i];
}
str[i-n]='\0';
printf("string:%s",str);
}*/
/*#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int i,n,f=0;
printf("enter the string");
gets(str);
int l=strlen(str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]!=str[l-i-1])
{
f=1;
break;
}
}
if(f==1)
{
printf("not a palindrome");
}
else
{
printf(" palindrome");
}
return 0;
}*/
/*#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
char ch;
int i,n,f=0;
printf("enter the string");
gets(str);
printf("enter the character");
scanf("%c",&ch);
int l=strlen(str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]==ch)
{
f=1;
break;
}
}
if(f==1)
{
printf("index present in %c is %d",ch,i);
}
else
{
printf("%d",-1);
}
}*/
/*#include<stdio.h>
#include<string.h>
int main()
{
int words=1,lines=1,characters=0,i;
char str[100];
char p='\0';
printf("enter the string");
scanf("%[^*]",str);
int l=strlen(str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]==' ' ||str[i]=='\t'|| str[i]=='\n'){
if(p!=' '&& p!='\t'&&p!='\n'&& p!='\0')
words++;
}
p=str[i];
if(str[i]=='\n')
{
lines++;
}
else if((str[i]>='a'&& str[i]<='z')||(str[i]>='A'&& str[i]<='Z'))
{
characters++;
}
}
printf("characters:%d\n",characters);
printf("lines:%d\n",lines);
printf("words:%d\n",words);
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
printf("enter the eleemnts");
for(i=0;i<n;i++)
{
scanf("%d",(p+i));
}
for(i=0;i<n;i++)
{
printf("%d",*(p+i));
}
}*/
/*#include<stdio.h>
int main(){
int i,n,sum=0;
printf("enter the size");
scanf("%d",&n);
int a[n];
int *p;
p=&a[0];
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",(p+i));
sum=sum+*(p+i);
}
printf("%d\n",sum);
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
scanf("%d",(p+i));
}
for(i=n-1;i>=0;i--)
{
printf("%d\n",*(p+i));
}
}*/
/*#include<stdio.h>
int power(int,int);
int main()
{
int a,b,c;
printf("enter the size");
scanf("%d%d",&a,&b);
c=power(a,b);
printf("%d",c);
}
int power(int a,int b){
if(b==0)
{
return 1;
}
else
{
return a*power(a,b-1);
}
}*/
/*#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
printf("enter the va;ues");
scanf("%d%d",&a,&b);
c=pow(a,b);
printf("%d",c);
}*/
/*#include<stdio.h>
int fact(int);
int main()
{
int c,n;
printf("enter the value");
scanf("%d",&n);
c=fact(n);
printf("%d",c);
}
int fact(int n)
{
if(n<=1)
{
return 1;
}
else
{
return n*fact(n-1);
}
}*/
/*#include<stdio.h>
int main()
{
int i,n,fact=1;
printf("Enter the value");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("%d",fact);
}*/
/*#include<stdio.h>
int gcd(int,int);
int main()
{
int n1,n2;
printf("enter the values");
scanf("%d%d",&n1,&n2);
int c=gcd(n1,n2);
printf("%d",c);
}
int gcd(int n1,int n2)
{
if(n2!=0)
{
return gcd(n2,n1%2);
}
else
{
return n1;
}
}*/
/*#include<stdio.h>
int main()
{
int n1,n2,i,gcd;
printf("enter the values");
scanf("%d%d",&n1,&n2);
for(i=1;i<n1 && i<=n2;i++)
{
if(n1%i==0 && n2%i==0)
gcd=i;
}
printf("%d is %d is %d",n1,n2,gcd);
}*/
/*#include<stdio.h>
int main()
{
int r1,c1,r2,c2,i,j,c[10][10];
printf("enter the size of 1st matric");
scanf("%d%d",&r1,&c1);
printf("enter the size of 2nd matrix");
scanf("%d%d",&r2,&c2);
int  a[r1][c1],b[r2][c2];
if(r1==r2&&c1==c2)
{
printf("enter the elements");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the elements");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
scanf("%d",&b[i][j]);
}
}
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
printf("addition");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%d",c[i][j]);
}
printf("\n");
}
}
else
{
printf("additon is not possible");
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int r1,c1,r2,c2,i,j,k;
printf("enter the esize of 1st ");
scanf("%d%d",&r1,&c1);
printf("enter the size of 2nd matrix");
scanf("%d%d",&r2,&c2);
int a[r1][c1],b[r2][c2],c[r1][c2];
if(r1==c2)
{
printf("enter the elements");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the elements");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
scanf("%d",&b[i][i]);
}
}
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
c[i][j]=0;
for(k=0;k<c1;k++)
{
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
}
printf("product");
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
}
else
{
printf("product is not possible");
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
printf("%d\t",a[i][j]);
}
}
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int r,c,i,j;
printf("enter the size");
scanf("%d%d",&r,&c);
int a[r][c],t[c][r];
printf("enter the elements");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
t[j][i]=a[i][j];
}
}
printf("transpose");
for(i=0;i<c;i++)
{
for(j=0;j<r;j++)
{
printf("%d ",t[i][j]);
}
printf("   \n");
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int i,n,sum=0,j,k;
printf("enter the size");
scanf("%d",&n);
int a[n];
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
float avg=sum/n;
printf("average:%f\n",avg);
printf("sum=%d\n",sum);
int min=a[0];
int max=a[0];
for(i=1;i<n;i++)
{
if(a[i]<min)
{
min=a[i];
}
else if(a[i]>max)
{
max=a[i];
}
}
printf("minimum:%d\n",min);
printf("maximum:%d\n",max);
}*/
/*#include<stdio.h>
#include<math.h>
int main()
{
int i,n,sum=0,sum1=0;
float var,stdvar;
printf("enter the size");
scanf("%d",&n);
int a[n];
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
float avg=(sum)/n;
sum1=sum+pow((a[i]-avg),2);
var=sum1/(float)n;
for(i=0;i<n;i++)
{
stdvar=sqrt(var);
}
printf("sum:%d\n",sum);
printf("float:%f\n",avg);
printf("variance:%f\n",var);
printf("standard variance:%f\n",stdvar);
}*/
/*#include<stdio.h>
int main()
{
int a,b,c;
float d,r2,r1;
printf("enter the values");
scanf("%d%d",&a,&b);
d=(b*b-4*a*c,0.5);
if(d==0)
{
printf("real and equal roos");
r1=(-b+d)/2*a;
r2=(-b-d)/2*a;
printf("%f",r1);
printf("%f",r2);
}
else if(d>0)
{
printf("real and not equal roots");
}
else {
printf("they are imaginary roots");
}
}*/
/*#include<stdio.h>
int main()
{
int i,n,count=0;
printf("enter the umber");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
count++;
}
}
if(count==2)
{
printf("prime number");
}
else
{
printf("not a prime number");
}
}*/
/*#include<stdio.h>
int main()
{
int sum=0,s=0,rem,i,n;
printf("enter the number");
scanf("%d",&n);
int t=n;
while(n>0)
{
rem=n%10;
sum=sum+rem;
s=s*10+rem;
n=n/10;
}
if(s==t)
{
printf("not a palindrome");
}
else
{
printf("it is a palindrome");
}
}*/
#include<stdio.h>
int main()
{
int count,i,j,n;
printf("enter the number");
scanf("%d",&n);
printf("all the numbers from 1 to n");
for(i=2;i<=n;i++)
{
count=0;
for(j=1;j<=i;j++)
{
if(i%j==0){
count++;
}
if(count==2)
{
printf("%d\n",i);
}
}
}
return 0;
}












