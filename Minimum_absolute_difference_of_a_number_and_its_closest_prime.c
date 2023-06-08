#include<stdio.h>
int prime(int n)
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
            x=i;
            break;
        }
    }
    for(i=n;i>0;i--)
    {
        if(prime(i)==1)
        {
            y=i;
            break;
        }
    }
    if((x-n)==(n-y)) printf("%d",x-n);
    else if((x-n)<(n-y)) printf("%d",x-n);
    else printf("%d",n-y);
}