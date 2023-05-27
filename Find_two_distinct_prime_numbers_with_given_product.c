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
    int n,i,x,y,c=0;
    scanf("%d",&n);
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            x=i;
            if(fun(x)==1)
            {
               y=n/x;
               if(fun(y)==1)
               {
                   c=1;
                   printf("%d %d",x,y);
                   break;
               }
            }
        
        }
        
    }
    if(c==0) printf("-1");
}