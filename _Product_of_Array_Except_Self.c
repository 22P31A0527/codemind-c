#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n],p;
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        p=1;
        for(j=0;j<n;j++)
        {
            if(j!=i) p=p*a[j];
        }
        printf("%d ",p);
    }
}