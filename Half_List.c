#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int m=n/2,j=0;
    for(i=n-1;i>=m;i--)
    {
        b[j]=a[i];
        j++;
    }
    for(i=0;i<m;i++)
    {
        b[j]=a[i];
        j++;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}