#include<stdio.h>
int main()
{
    int n=3,i;
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    int c=0,d=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>b[i])
        {
            c++;
        }
        else if(a[i]<b[i])
        {
            d++;
        }
    }
    printf("%d %d",c,d);
}