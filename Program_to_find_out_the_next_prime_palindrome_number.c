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
int palin(int n)
{
    int r,s=0;
    int q=n;
    while(q!=0)
    {
        r=q%10;
        s=s*10+r;
        q=q/10;
    }
    if(s==n) return 1;
    else return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    int i=n+1;
    while(1)
    {
        if(prime(i)==1 && palin(i)==1)
        {
           printf("%d ",i);
           break;
        }
        i++;
    }
}