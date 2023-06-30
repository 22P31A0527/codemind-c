#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        int m;
        scanf("%d",&m);
        a[i]=m;
    }
    int w,c=0;
    scanf("%d",&w);
    for(i=0;i<n;i++)
    {
        if(a[i]<=w)
        {
            c=c+1;
        }
        else
        {
            c=c+2;
        }
    }
    printf("%d",c);
}