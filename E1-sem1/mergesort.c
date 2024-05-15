void mergesort(int a[],int low,int high)
{
int mmid;
if(low<high)
{
mid=low+high/2;
merge sort(a,low,mid);
merge sort(a,mid+1,high);
merge(a,low,mid,high);
}
}
void merge(int a[],int low,int mid,int high)
{
int i,j,k,b[20];
i=low;
j=mid+1;
while(i<=mid && i<=high)
{
if(a[i]<=a[j])
{
b[k++]=a[i++];
}
else 
{
b[k++]=a[j++];
}
while(i<=mid)
{
b[k++]=a[i++];
}
while(j<=high)
{
b[k++]=a[j++];
for(k=low;k<high;k++)
{
a[k]=b[k];
}
}
}
int main()
{
int m,n;
printf("enter size of array");
scanf("%d",&n);
int a[n];
printf("enter the elements of array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
mergesort(a,0,n-1);
printf("sorted elements");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
