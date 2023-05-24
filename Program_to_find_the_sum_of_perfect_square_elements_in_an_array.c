#include<stdio.h>
int main()
{
    int n,i,j,s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(a[i]==j*j)
            {
                s=s+a[i];
            }
        }
    }
    printf("%d",s);
}