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