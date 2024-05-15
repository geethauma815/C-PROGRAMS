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















