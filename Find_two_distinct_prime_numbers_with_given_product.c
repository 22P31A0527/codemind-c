#include<stdio.h>
int fun(int n)
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
    int n,x,m,i,c=0;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            if(fun(i)==1)
            {
                x=n/i;
                if(fun(x)==1)
                {
                    printf("%d %d",i,x);
                    c=1;
                    break;
                }
            }
        }
    }
    if(c==0) printf("-1");
}