#include<stdio.h>
int main()
{
    int n,i,s=1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
            s=0;
            break;
        }
    }
    if(s==0) printf("no");
    else printf("yes");
}