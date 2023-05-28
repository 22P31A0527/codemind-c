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
    int n1,n2,i,m;
    scanf("%d%d",&n1,&n2);
    int t=n1+n2;
    for(i=1;i<=t;i++)
    {
        m=t+i;  
        if(fun(m)==1)  
        {
            printf("%d",i);
            break;
        }
    }
}