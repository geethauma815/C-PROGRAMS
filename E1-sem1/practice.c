/*#include<stdio.h>
int main()
{
int r1,c1,r2,c2,i,j,c[10][10];
printf("enter the row and column size of 1st matrix:\n");
scanf("%d%d",&r1,&c1);
printf("enter the row and column of 2nd matrix:\n");
scanf("%d%d",&r2,&c2);
int a[r1][c1],b[r2][c2];
if(r1==r2&&c1==c2)
{
printf("enter the elements of 1st matrix:\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the elements of 2nd matrix:\n");
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
printf("addition of matrix:\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%d\n",c[i][j]);
}
printf("\n");
}
}
else
{
printf("addition is not possible");
}
return 0;
}
#include<stdio.h>
int main()
{
int i,j,n,pos,v;
printf("enter the size");
scanf("%d",&n);
int a[n];
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the position where we have to insert:");
scanf("%d",&pos);
if(pos>n)
{
printf("invalid");
}
else
{
printf("enter the element you have to inset:");
scanf("%d",&v);
for(i=n-1;i>=pos;i--)
{
a[i+1]=a[i];
}
}
a[pos]=v;
printf("after insertion :");
for(i=0;i<=n;i++)
{
printf("%d\n",a[i]);
}
return 0;
}
#include<stdio.h>
int main()
{
int i,j,n,pos;
printf("enter the size:");
scanf("%d",&n);
int a[n];
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the position where we have to delete:");
scanf("%d",&pos);
if(pos>=n)
{
printf("invalid");
}
else
{
for(i=0;i<n;i++)
{
a[i]=a[i+1];
}
printf("after deletion:\n");
for(i=0;i<n-1;i++)
{
printf("%d\n",a[i]);
}
printf("\n");
}
return 0;
}*/
#include<stdio.h>
int main()
{
int r,c,i,j;
printf("enter the row and column:");
scanf("%d%d",&r,&c);
int a[r][c],k[c][r];
printf("enter the elements:");
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
k[j][i]=a[i][j];
}
}
printf("transpose:\n");
for(i=0;i<c;i++)
{
for(j=0;j<r;j++)
{
printf("%d",k[i][j]);
}
printf("\n");
}
return 0;
}















