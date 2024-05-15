#include<stdio.h>
void multiply(int[][],int[][],int,int);
int main()
{
int r1,r2,c1,c2,i,j;
printf("enter the row and column of the first matrix\n");
scanf("%d%d",&r1,&c1);
printf("enter the row and column of second matrix\n");
scanf("%d%d",&r2,&c2);
int a[r1][c1],b[r2][c2],c[r1][c2];
if(c1==r2)
{
printf("enter the elements of first matrix\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the elements of second matrix\n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
scanf("%d",&b[i][j]);
}
}
multiply(a,b,r1,c2);
}
}
void multiply(int a[][],int b[][],int c[][],int r1,int c2,int r2,int c1)
{
int k,sum=0,i,j;
int a[r1][c1],b[r2][c2],c[r1][c2];
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
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
}
