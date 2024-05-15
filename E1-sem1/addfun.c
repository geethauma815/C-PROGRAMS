#include<stdio.h>
void add(int [][],int[][]);
int main()
{
int r1,c1,r2,c2,i,j;
printf("enter the row and column of first matrix\n");
scanf("%d%d",&r1,&c1);
printf("enter the row and column of second matrix\n");
scanf("%d%d",&r2,&c2);
printf("enter the elements of first matrix\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the elements of second matrix\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
scanf("%d",&b[i][j]);
}
}
add(a[],b[]);
}
int add(int a[][],int b[][])
{
int i,j,k,r1,c1,c[r1][c1];
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
}
