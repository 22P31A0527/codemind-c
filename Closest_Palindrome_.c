#include<stdio.h>
int pal(int n)
{
    int q=n,r,s=0;
    while(q>0)
    {
        r=q%10;
        s=s*10+r;
        q=q/10;
    }
    if(s==n) return 1;
    return 0;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int x=0,y=0;
    for(i=n-1;;i--)
    {
        if(pal(i)==1)
        {
            x=i;
            break;
        }
    }
    for(i=n+1;;i++)
    {
        if(pal(i)==1)
        {
            y=i;
            break;
        }
    }
    int p=y-n,q=n-x;
    if(p==q) printf("%d %d",x,y);
    else if(p<q) printf("%d ",y);
    else printf("%d",x);
}