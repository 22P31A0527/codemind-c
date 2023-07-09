#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b[n],k=0;
    for(i=m;i<n;i++)
    {
        b[k++]=a[i];
    }
    for(i=0;i<m;i++)
    {
        b[k++]=a[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}