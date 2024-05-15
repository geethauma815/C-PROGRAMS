/*#include<stdio.h>
int main()
{
int i,n,pos,value,j;
printf("enter the size:");
scanf("%d",&n);
int a[n];
printf("enter the elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the position where we have to inserted:");
scanf("%d",&pos);
if(pos>n)
{
printf("insertion is not possible:");
}
else
{
printf("enter the value to be inserted:");
scanf("%d",&value);
for(i=n-1;i>=pos;i--)
{
a[i+1]=a[i];
}
a[pos]=value;
}
printf("after inserted:");
for(i=0;i<=n;i++)
{
printf("%d",a[i]);
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int i,n,pos;
printf("enter the size:");
scanf("%d",&n);
int a[n];
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the position where we have delete:");
scanf("%d",&pos);
for(i=pos;i<n;i++)
{
a[i]=a[i+1];
}
printf("after deltion");
for(i=0;i<n-1;i++)
{
printf("%d",a[i]);
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int r,c,i,j;
printf("enter the row and column:");
scanf("%d%d",&r,&c);
int a[r][c],t[c][r];
printf("enter the elements:");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<c;i++)
{
for(j=0;j<r;j++)
{
t[j][i]=a[i][j];
}
}
printf("after transpose:");
for(i=0;i<c;i++)
{
for(j=0;j<r;j++)
{
printf("%d\t",t[i][j]);
}
//printf("\n");
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int i,n,j,c;
printf("enter the size:");
scanf("%d",&n);
int a[n];
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
c=a[i];
a[i]=a[j];
a[j]=c;
}
}
}
printf("after sorting:");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
return 0;
}*/
#include<stdio.h>
int main()
{
int r1,c1,r2,c2,i,j,k;
printf("enter the size of 1st matrix:");
scanf("%d%d",&r1,&c1);
printf("enter the size of 2nd matrix:");
scanf("%d%d",&r2,&c2);
int a[r1][c1],b[r2][c2],c[r1][c2];
if(c1!=r2)
{
printf("product is not possible");
}
else
{
printf("enter the elements of 1st matrix:");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the elements of 2nd matrix:");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
scanf("%d",&b[i][j]);
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
printf("product of matrix:");
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
printf("%d",c[i][j]);
}
printf("\n");
}
}
return 0;
}


















