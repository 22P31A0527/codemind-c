#include<stdio.h>
int main()
{
    int n,k,m,t;
    scanf("%d%d%d",&n,&k,&m);
    t=k*m;   //total
    if(n%t==0)
    {
        printf("%d",n/t);
    }
    else
    {
        printf("%d",n/t+1);
    }
}