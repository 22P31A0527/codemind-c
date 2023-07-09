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
    int j,c,m=0;
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[j]==a[i]) c++;
        }
        if(c==1)
        {
            if(a[i]>m) m=a[i];
        }
    }
    if(m!=0) printf("%d",m);
    else printf("-1");
}