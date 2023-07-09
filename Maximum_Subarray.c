#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int j,s,m=a[0];
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=i;j<n;j++)
        {
            s=s+a[j];
            if(s>m)
            {
                m=s;
            }
        }
    }
    printf("%d",m);
}