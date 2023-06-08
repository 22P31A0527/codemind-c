#include<stdio.h>
int prime(int  n)
{
    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
int main()
{
    int n,i,x,y;
    scanf("%d",&n);
    for(i=n;i<=2*n;i++)
    {
        if(prime(i)==1)
        {
            x=i-n;
            break;
        }
    }
    for(i=n-1;i>0;i--)
    {
        if(prime(i)==1)
        {
            y=n-i;
            break;
        }
    }
    if(x==y) printf("%d",x);
    else if(x<y) printf("%d",x);
    else printf("%d",y);
}